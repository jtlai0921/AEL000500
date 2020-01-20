// Program 11.1 Using a Box structure
#include <iostream>
using namespace std;

// Structure to represent a box
struct Box
{
  double length;
  double breadth;
  double height;
};

// Prototype of function to calculate the volume of a box
double volume(const Box& aBox);

int main()
{
  Box firstBox = { 80.0, 50.0, 40.0 };

  // Calculate the volume of the box
  double firstBoxVolume = volume(firstBox);
  cout << endl;
  cout << "Size of first Box object is "
       << firstBox.length  << " by " 
       << firstBox.breadth << " by "
       << firstBox.height
       << endl;
  cout << "Volume of first Box object is " << firstBoxVolume
       << endl;

  Box secondBox = firstBox;       // Create a second Box object the same as firstBox

  // Increase the dimensions of second Box object by 10%
  secondBox.length *= 1.1;
  secondBox.breadth *= 1.1;
  secondBox.height *= 1.1;

  cout << "Size of second Box object is "
       << secondBox.length << " by " 
       << secondBox.breadth << " by "
       << secondBox.height
       << endl;
  cout << "Volume of second box object is " << volume(secondBox)
       << endl;

  cout << "Increasing the box dimensions by 10% has increased the volume by "
       << static_cast<long>((volume(secondBox)-firstBoxVolume)*100.0/firstBoxVolume)
       << "%"
       << endl;
  return 0;
}


// Function to calculate the volume of a box
double volume(const Box& aBox)
{
  return aBox.length * aBox.breadth * aBox.height;
}
