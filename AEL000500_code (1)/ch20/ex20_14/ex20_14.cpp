// Program 20.14 A Bean in action
#include "bean.h"

int main() 
{ 
  Bean A;
  Bean B;
  A = B;

  if(A==B) 
    cout << "All Beans are created equal" << endl << endl;
  if(A<B) 
    cout << "Big trouble" << endl;

  usage_report("assign, compare, and order");

  Bean* pB = new Bean[10];
  delete[] pB;

  usage_report("new and delete 10 elements");

  return 0;
}   
