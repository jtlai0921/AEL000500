// Program 19.2 Reading the primes file
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const char* filename = "C:\\JunkData\\primes.txt";   // Name of the file to read
  ifstream inFile(filename);                           // Create input stream object

  // Make sure the file stream is good
  if(!inFile)
  {
    cout << endl << "Failed to open file " << filename;
    return 1;
  }

  long aprime = 0;
  int count = 0;
  while(!inFile.eof())                                 // Continue until EOF is found
  {
    inFile >> aprime;                                  // Read a value from the file
    cout << (count++ % 5 == 0 ? "\n" : "") << setw(10) << aprime;
  }
  cout << endl;
  return 0;
}
