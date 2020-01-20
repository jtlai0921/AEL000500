// Box.cpp Box class member function definitions
#include <iostream>
#include "Box.h"

using namespace std;

// Constructor definition using an initializer list
Box::Box(double lvalue, double bvalue, double hvalue) : length(lvalue),
                                                        breadth(bvalue),
                                                        height(hvalue)
{
  cout << "Box constructor called" << endl;

  // Ensure positive dimensions
  if(length <= 0.0)
    length = 1.0;
  if(breadth <= 0.0)
    breadth = 1.0;
  if(height <= 0.0)
    height = 1.0;
}

// Function to calculate the volume of a box
double Box::volume()
{
  return length * breadth * height;
}
