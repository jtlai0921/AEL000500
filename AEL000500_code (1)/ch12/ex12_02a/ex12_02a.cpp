// Program 12.2 Using a class constructor
#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
  Box firstBox(80.0, 50.0, 40.0);

  // Calculate the volume of the box
  double firstBoxVolume = firstBox.volume();
  cout << endl;
  cout << "Size of first Box object is "
       << firstBox.length  << " by "
       << firstBox.breadth << " by "
       << firstBox.height
       << endl;
  cout << "Volume of first Box object is " << firstBoxVolume
       << endl;

  return 0;
}
