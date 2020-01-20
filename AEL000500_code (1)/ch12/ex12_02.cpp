// Program 12.2 Using a class constructor
#include <iostream>
using namespace std;

// Class to represent a box
class Box
{
  public:
    double length;
    double breadth;
    double height;

    // Constructor
    Box(double lengthValue, double breadthValue, double heightValue)
    {
      cout << "Box constructor called" << endl;
      length = lengthValue;
      breadth = breadthValue;
      height = heightValue;
    }

    // Function to calculate the volume of a box
    double volume()
    {
      return length * breadth * height;
    }
};

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
