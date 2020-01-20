// Program 19.3 Reading and writing the primes file
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

long nextprime(long lastprime, const char* filename);  // Find the prime after lastprime

int main()
{
  const char* filename = "C:\\JunkData\\primes.txt";
  int nprimes = 0;                                     // Number of primes required
  int count = 0;                                       // Count of primes found
  long lastprime = 0;                                  // Last prime found

  // Get number of primes required
  int tries = 0;                                       // Number of input tries
  cout << "How many primes would you like (at least 3)?: ";
  do
  {
    if(tries)
      cout << endl << " You must request at least 3, try again: ";
    cin >> nprimes;

    if(++tries == 5)                                   // Five tries is generous
    {
      cout << endl << " I give up!" << endl;
      return 1;
    }
  } while(nprimes < 3);

  ifstream inFile;                                     // Create input file stream object
  inFile.open(filename);                               // Open the file as an input stream

  cout << endl;
  if(!inFile.fail())
  {
    do
    {
      inFile >> lastprime;
      cout << (count++ % 5 == 0 ? "\n" : "") << setw(10) << lastprime;
    } while(count < nprimes && !inFile.eof());
    inFile.close();
  }
  inFile.clear();                                      // Clear any errors

  try
  {
    ofstream outFile;
    if(count == 0)
    {
      outFile.open(filename);                          // Open file to create it
      if(!outFile.is_open())
        throw ios::failure(string("Error opening output file ") +
                           string(filename) +
                           string(" in main()"));
      outFile << " 2 3 5";
      outFile.close();
      cout << setw(10) << 2 << setw(10) << 3 << setw(10) << 5;
      lastprime = 5;
      count = 3;
    }

    while(count < nprimes)
    {
      lastprime = nextprime(lastprime, filename);
      outFile.open(filename, ios::out | ios::app);     // Open file to append data
      if(!outFile.is_open())
        throw ios::failure(string("Error opening output file ") +
                           string(filename) +
                           string(" in main()"));
      outFile << " " << lastprime;
      outFile.close();
      cout << (count++ % 5 == 0 ? "\n" : "") << setw(10) << lastprime;
    }
    cout << endl;
    return 0;
  }
  catch(exception& ex)
  {
    cout << endl << typeid(ex).name() << ": " << ex.what();
    return 1;
  }
}

// Find the next prime after the argument
long nextprime(long lastprime, const char* filename)
{
  bool isprime = false;                                // Indicator that we have a prime
  long aprime = 0;                                     // Stores primes from the file
  ifstream inFile(filename);                           // Local input stream object

  if(!inFile.is_open())
    throw ios::failure(string("Error opening input file ") +
                       string(filename) +
                       string(" in nextprime()"));

  // Find the next prime
  for( ; ; )
  {
    lastprime += 2;                                    // Next value for checking
    long limit = static_cast<long>(sqrt(lastprime));

    // Try dividing the candidate by all the primes up to limit
    do
    {
      inFile >> aprime; 
    } while(aprime <= limit && !inFile.eof() && (isprime = lastprime % aprime > 0));

    if(isprime)                                        // We got one...
    {
      inFile.close();                                  // ...so close the file...
      return lastprime;                                // ...and return the prime
    }
    inFile.seekg(0);                                   // Move to beginning of file
  }
}
