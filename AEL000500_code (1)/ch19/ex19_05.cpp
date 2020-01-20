// Program 19.5 Reading and writing the primes file as binary
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

long nextprime(long lastprime, const char* filename);    // Find the prime after lastprime
void write(ostream& out, long value);                    // Write binary long value
void read(istream& in, long& value);                     // Read binary long value

int main()
{
  const char* filename = "C:\\JunkData\\primes.bin";
  int nprimes = 0;                                       // Number of primes required
  int count = 0;                                         // Count of primes found
  long lastprime = 0;                                    // Last prime found

  // Get number of primes required
  int tries = 0;                                         // Number of input tries
  cout << "How many primes would you like (at least 3)?: ";
  do
  {
    if(tries)
      cout << endl << " You must request at least 3, try again: ";
    cin >> nprimes;

    if(++tries == 5)                                     // Five tries is generous
    {
      cout << endl << " I give up!" << endl;
      return 1;
    }
  } while(nprimes < 3);

  ifstream inFile;                                       // Create input file stream object
  inFile.open(filename, ios::in | ios::binary);          // Open the file as an input stream

  cout << endl;
  if(!inFile.fail())
  {
    do
    {
      read(inFile, lastprime);
      cout << (count++ % 5 == 0 ? "\n" : "") << setw(10) << lastprime;
    } while(count < nprimes && !inFile.eof());
    inFile.close();
  }
  inFile.clear();                                        // Clear any errors

  try
  {
    ofstream outFile;
    if(count == 0)
    {
      // Open file to create it
      outFile.open(filename, ios::out | ios::binary | ios::app);
      if(!outFile.is_open())
        throw ios::failure(string("Error opening output file ") +
                           string(filename) +
                           string(" in main()"));
      write(outFile, 2);                                 // Write 2 as binary long
      write(outFile, 3);                                 // Write 3 as binary long
      write(outFile, 5);                                 // Write 5 as binary long
      outFile.close();
      cout << setw(10) << 2 << setw(10) << 3 << setw(10) << 5;
      lastprime = 5;
      count = 3;
    }

    while(count < nprimes)
    {
      lastprime = nextprime(lastprime, filename);

      // Open file to append data
      outFile.open(filename, ios::out | ios::binary | ios::app);
      if(!outFile.is_open())
        throw ios::failure(string("Error opening output file ") +
                           string(filename) +
                           string(" in main()"));
      write(outFile, lastprime);                         // Write prime as binary
      outFile.close();
      cout << (count++ % 5 == 0 ? "\n" : "") << setw(10) << lastprime;
    }
    cout << endl;
    return 0;
  }
  catch(exception& ex)
  {
    cout << endl << typeid(ex).name() << ": " << ex.what() << endl;
    return 1;
  }
}

long nextprime(long lastprime, const char* filename)
{
  bool isprime = false;                                  // Indicator that we have a prime
  long aprime = 0;                                       // Stores primes from the file
  ifstream inFile;                                       // Local input stream object

  // Find the next prime
  for( ; ; )
  {
    lastprime += 2;                                      // Next value for checking
    long limit = static_cast<long>(sqrt(lastprime));

    // Try dividing the candidate by all the primes up to limit
    inFile.open(filename, ios::in | ios::binary);        // Open the primes file
    if(!inFile.is_open())
      throw ios::failure(string("Error opening input file ") +
                         string(filename) +
                         string(" in nextprime()"));

    do
    {
      read(inFile, aprime);                              // Read prime as binary
    } while(aprime <= limit && !inFile.eof() && (isprime = lastprime % aprime > 0));

    inFile.close();
    if(isprime)                                          // We got one...
      return lastprime;                                  // ...so return it
  }
}

// Read a long value from a file as binary
void read(istream& in, long& value)
{
  in.read(reinterpret_cast<char*>(&value), sizeof(value));
}

// Write a long value to a file as binary
void write(ostream& out, long value)
{
  out.write(reinterpret_cast<char*>(&value), sizeof(value));
}
