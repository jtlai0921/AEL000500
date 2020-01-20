// Box.cpp
#include "box.h"

// Constructor
Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv)
{}

// Function to calculate the volume of a Box object
double Box::volume() const
{ 
  return length*breadth*height;
}
