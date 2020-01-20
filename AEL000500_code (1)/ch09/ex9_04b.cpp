// Program 9.4b Using function template specialization
#include <iostream>
#include <iomanip>
using namespace std;

template<class T> T larger(T a, T b);             // Function template prototype
template<> long* larger<long*>(long* a, long* b); // Specialization
template<class T> T larger (const T array[], int count); // Overloaded template 

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

  double x[] = { 10.5, 12.5, 2.5, 13.5, 5.5 };

  cout << "Largest element has the value " 
       << larger(x, sizeof x/sizeof x[0]) 
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
template <> long* larger<long*>(long* a, long* b)
{
  cout << "specialized version " << endl;
  return *a>*b ? a : b;
}

// Overloaded template definition
template <class T> T larger (const T array[], int count)
{
  cout << "template overload version for arrays " << endl;
  T result = array[0];
  for(int i = 1 ; i < count ; i++)
    if(array[i] > result)
      result = array[i];
  return result;
}



