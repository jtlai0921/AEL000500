// Program 8.4 Modifying the original value of a function argument
#include <iostream>
#include <iomanip>
using namespace std;

double changeIt(double* pointer_to_it);  // Function prototype

int main()
{
  double it = 5.0;
  double result = changeIt(&it);         // Now we pass the address

  cout << "After function execution, it = " << it     << endl
       << "Result returned is "             << result << endl;

  return 0;
}

// Function to modify an argument and return it
double changeIt(double* pit)
{
  *pit += 10.0;                          // This modifies the original
  cout << endl
       << "Within function, *pit = " << *pit << endl;
  return *pit;
}
