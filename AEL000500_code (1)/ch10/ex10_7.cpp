// Program 10.7 Demonstrating assertions
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
  int x = 0;
  int y = 5;

  cout << endl;
  
  for(x = 0 ; x < 20 ; x++)
  {
    cout << "x = " << x << "   y = " << y << endl;
    assert(x<y);
  }
  return 0;
}
