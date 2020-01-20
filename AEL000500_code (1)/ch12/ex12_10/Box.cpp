// Box.cpp Box class member function definitions
#include <iostream>
#include "Box.h"

using namespace std;

// Default constructor
Box::Box()
{
  cout << "Default constructor called" << endl;
  ++objectCount;
  length = breadth = height = 1.0;
}

// Constructor definition using an initializer list
Box::Box(double lvalue, double bvalue, double hvalue) : length(lvalue),
                                                        breadth(bvalue),
                                                        height(hvalue)
{
  cout << "Box constructor called" << endl;
  ++objectCount;

  // Ensure positive dimensions
  if(length <= 0.0)
    length = 1.0;
  if(breadth <= 0.0)
    breadth = 1.0;
  if(height <= 0.0)
    height = 1.0;
}

// Function to calculate the volume of a box
double Box::volume() const
{
  return length * breadth * height;
}

// Function to compare two Box objects
// If the current Box is greater than the argument, 1 is returned
// If they are equal, 0 is returned
// If the current Box is less than the argument, -1 is returned
int Box::compareVolume(const Box& otherBox) const
{
  double vol1 = this->volume();        // Get current Box volume
  double vol2 = otherBox.volume();     // Get argument volume
  return vol1 > vol2 ? 1 : (vol1 < vol2 ? -1 : 0);
}

// Initialize static member of class Box
int Box::objectCount = 0;
