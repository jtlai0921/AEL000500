// Program 19.7 Writing Box object to cout
#include <iostream>
using namespace std;

#include "Box.h"

int main()
{
  Box bigBox(50, 60, 70);
  Box smallBox(2, 3, 4);
  cout << endl << "bigBox is " << bigBox;
  cout << endl << "smallBox is " << smallBox;
  cout << endl;
  return 0;
}
