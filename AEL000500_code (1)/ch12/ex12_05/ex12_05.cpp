// Program 12.5 Creating a copy of an object
#include <iostream.h>
#include "Box.h"

int main()
{
  cout << endl;

  Box firstBox(2.2, 1.1, 0.5);
  Box secondBox(firstBox);

  cout << "Volume of first box = "
       << firstBox.volume()
       << endl;

  cout << "Volume of second box = "
       << secondBox.volume()
       << endl;

  return 0;
}
