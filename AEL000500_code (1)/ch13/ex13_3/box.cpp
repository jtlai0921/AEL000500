// Box.cpp Implementation of the Box class
#include "Box.h"
#include <iostream>
using namespace std;

// Constructor
Box::Box(double aLength, double aBreadth, double aHeight)
{
  length = aLength > 0.0 ? aLength : 1.0;
  breadth = aBreadth > 0.0 ? aBreadth : 1.0;
  height = aHeight > 0.0 ? aHeight : 1.0;
}

// Box destructor
Box::~Box()
{
  cout << "Box destructor called." << endl; 
}

// Calculate Box volume
double Box::volume() const{ return length*breadth*height; }  

// getXXX() functions
double Box::getLength()  const { return length; }
double Box::getBreadth() const { return breadth; }
double Box::getHeight()  const { return height; }


// Function to compare two Box objects
// If the current Box is greater than the argument, 1 is returned
// If they are equal, 0 is returned
// If the current Box is less than the argument -1 is returned
int Box::compareVolume(const Box& otherBox) const
{
  double vol1 = volume();                            // Get current Box volume
  double vol2 = otherBox.volume();                   // Get argument volume
  return vol1>vol2 ? 1 : (vol1<vol2 ? -1 : 0);
}
