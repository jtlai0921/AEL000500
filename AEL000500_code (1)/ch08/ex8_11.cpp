// Program 8.11 Using a static variable
#include <iostream>
#include <iomanip>
using namespace std;

long nextFib();

int main()
{
  cout << endl << "The Fibonacci Series" << endl;
  for(int i = 0 ; i < 30 ; i++)
  {
    if(i % 5 == 0)                      // Every fifth number...
      cout << endl;                     // ...start a new line
    cout << setw(12) << nextFib();
  }
  cout << endl;
  return 0;
}

// Function to generate the next number in the Fibonacci series
long nextFib()
{
  static long last = 0;                 // Last number in sequence
  static long lastButOne = 1;           // Last but one number

  long next = last + lastButOne;        // Next is sum of last two
  lastButOne = last;                    // Update last but one
  last = next;                          // Last is new one
  return last;                          // Return the new one
}
