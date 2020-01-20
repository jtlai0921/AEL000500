// Program 9.1b Overloading a function
#include <iostream>
#include <iomanip>
using namespace std;

double larger(double a, double b);             // Function prototypes
long larger(long a, long b);                   //


int main()
{
  cout << endl;
  cout << "Larger of 1.5 and 2.5 is " << larger(1.5, 2.5)   << endl;
  cout << "Larger of 2.5 and 3.5 is " << larger(2.5f, 3.5f) << endl;
  cout << "Larger of 15 and 25 is "   << larger(15L, 25L)   << endl;

  int value1 = 35;
  int value2 = 45;

  cout << "Larger of " << value1 << " and " << value2 << " is "
       << larger(static_cast<long>(value1), static_cast<long>(value2))
       << endl;

return 0;
}

// Function to return the larger of two floating point values
double larger(double a, double b)
{
  return a>b ? a : b;
}

// Function to return the larger of two integer values
long larger(long a, long b)
{
  return a>b ? a : b;
}
