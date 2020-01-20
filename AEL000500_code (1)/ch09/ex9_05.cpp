// Program 9.5 Exercising pointers to functions
#include <iostream>

using namespace std;

long sum(long a, long b);               // Function prototype
long product(long a, long b);           // Function prototype

int main()
{
  long (*pDoIt)(long, long) = 0;        // Pointer to function declaration

  pDoIt = product;
  cout << endl
       << "3*5 = " << pDoIt(3, 5);      // Call product thru a pointer

  pDoIt = sum;                          // Reassign pointer to sum()
  cout << endl
       << "3 * (4+5) + 6 = " 
       << pDoIt(product(3, pDoIt(4, 5)), 6);  // Call thru a pointer twice

  cout << endl;
  return 0;
}

// Function to multiply two values
long product(long a, long b)
{
  return a*b;
}

// Function to add two values
long sum(long a, long b)
{
  return a+b;
}
