// Program 12.3 Defining and using a default class constructor
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

  Box smallBox;
  smallBox.length = 10.0;
  smallBox.breadth = 5.0;
  smallBox.height = 4.0;

  // Calculate the volume of the small box
  cout << "Size of small Box object is "
       << smallBox.length << " by " 
       << smallBox.breadth << " by "
       << smallBox.height
       << endl;
  cout << "Volume of small Box object is " << smallBox.volume()
       << endl;

  return 0;
}
