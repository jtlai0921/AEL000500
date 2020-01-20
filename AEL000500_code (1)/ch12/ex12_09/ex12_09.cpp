// Program 12.9 Trying object sizes
#include <iostream>
#include "SizeBox.h"
using namespace std;

int main()
{
  SizeBox box;
  SizeBox boxes[10];
  cout << endl            << "The data members of a Box object occupy " 
       << box.totalSize() << " bytes.";

  cout << endl           << "A single Box object occupies " 
       << sizeof SizeBox << " bytes.";

  cout << endl           << "An array of 10 Box objects occupy " 
       << sizeof(boxes)  << " bytes." 
       << endl;
  return 0;
}
