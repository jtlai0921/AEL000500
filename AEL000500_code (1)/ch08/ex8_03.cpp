// Program 8.3 Failing to modify the original value of a function argument
#include <iostream>
#include <iomanip>
using namespace std;

double changeIt(double it);              // Function prototype

int main()
{
  double it = 5.0;
  double result = changeIt(it);

  cout << "After function execution, it = " << it     << endl
       << "Result returned is "             << result << endl;

  return 0;
}

// Function to attempt to modify an argument and return it
double changeIt(double it)
{
  it += 10.0;                            // This modifies the copy of the original
  cout << endl
       << "Within function, it = " << it << endl;
  return it;
}
