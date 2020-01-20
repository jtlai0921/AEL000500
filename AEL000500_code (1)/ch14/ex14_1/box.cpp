// Box.cpp
#include "Box.h"

// Box constructor
Box::Box(double aLength, double aBreadth, double aHeight):
        length(aLength), breadth(aBreadth), height(aHeight) {}

// Calculate Box volume
double Box::volume() const
{ 
  return length*breadth*height; 
}        

// getXXX() functions
double Box::getLength()  const { return length; }
double Box::getBreadth() const { return breadth; }
double Box::getHeight()  const { return height; }


