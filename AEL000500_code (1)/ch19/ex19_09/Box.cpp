// Box.cpp
#include <iostream>
using namespace std;

#include "Box.h"

// Constructor
Box::Box(double lv, double bv, double hv) : length(lv),
                                            breadth(bv),
                                            height(hv)
{}

// Destructor
Box::~Box()
{}

// Function to show the volume of an object
void Box::showVolume() const
{
  cout << endl << "Box usable volume is " << volume();
}

// Function to calculate the volume of a Box object
double Box::volume() const
{
  return length * breadth * height;
}

// Friend operator functions for Box
ostream& operator<<(ostream& out, const Box& rBox)
{
  return out << ' ' << rBox.length << ' ' << rBox.breadth << ' ' << rBox.height;
}

istream& operator>>(istream& in, Box& rBox)
{
  return in >> rBox.length >> rBox.breadth >> rBox.height;
}
