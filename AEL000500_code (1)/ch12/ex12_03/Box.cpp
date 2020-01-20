// Box.cpp
#include <iostream>
#include "Box.h"

using namespace std;

// Constructor definition using an initializer list
Box::Box(double lvalue, double bvalue, double hvalue) : length(lvalue),
                                                        breadth(bvalue),
                                                        height(hvalue)
{
  cout << "Box constructor called" << endl;
}

// Function to calculate the volume of a box
double Box::volume()
{
  return length * breadth * height;
}
