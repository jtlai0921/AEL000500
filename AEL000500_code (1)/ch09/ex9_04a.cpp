// Program 9.4a Using function template specialization
#include <iostream>
#include <iomanip>
using namespace std;

template<class T> T larger(T a, T b);             // Function template prototype
long* larger(long* a, long* b);                   // Overloaded function

int main()
{
  cout << endl;
  cout << "Larger of 1.5 and 2.5 is " << larger(1.5, 2.5) << endl;
  cout << "Larger of 3.5 and 4.5 is " << larger(3.5, 4.5) << endl;
 
  int value1 = 35;
  int value2 = 45;

  cout << "Larger of " << value1 << " and " << value2 << " is " 
       << larger(value1, value2)
       << endl;

  long a = 9;
  long b = 8;
  cout << "Larger of "   << a << " and " << b << " is "
       << larger(a,b)
       << endl;

  cout << "Larger of "   << a << " and " << b << " is " 
       << *larger(&a,&b)
       << endl;

return 0;
}

// Template for functions to return the larger of two values
template <class T> T larger(T a, T b)
{
  cout << "standard version " << endl;
  return a>b ? a : b;
}

// Template specialization definitions
long* larger(long* a, long* b)
{
  cout << "overloaded version for long* " << endl;
  return *a>*b ? a : b;
}


