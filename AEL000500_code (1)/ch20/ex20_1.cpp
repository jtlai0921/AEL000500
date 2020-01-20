// Program 20.1 A quick comparison of array and vector
#include <iostream> 
#include <vector>
using namespace std;

int main() 
{
  int a[10];                           // C++ array declaration 
  vector<int> v(10);                   // equivalent STL vector declaration 
  
  cout << "size of 10 element array:  " << sizeof a << endl;
  cout << "size of 10 element vector: " << sizeof v << endl;
  
  for (int i = 0; i < 10; ++i)  
    a[i] = v[i] = i;
    
  int a_sum = 0, v_sum = 0;
  for (int i = 0; i < 10; ++i) 
  {
    a_sum += a[i];
    v_sum += v[i];
  }

  cout << "sum of 10 array  elements: " << a_sum << endl;
  cout << "sum of 10 vector elements: " << v_sum << endl;
     
  return 0;
}
