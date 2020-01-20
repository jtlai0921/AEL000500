// Box.cpp
#include <iostream>
#include "Box.h"

using namespace std;

// Constructor definition
Box::Box(double lengthValue, double breadthValue, double heightValue)
{
  cout << "Box constructor called" << endl;
  length = lengthValue;
  breadth = breadthValue;
  height = heightValue;
}

// Function to calculate the volume of a box
double Box::volume()
{
  return length * breadth * height;
}
