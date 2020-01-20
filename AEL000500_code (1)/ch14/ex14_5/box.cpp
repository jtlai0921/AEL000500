// Box.cpp
#include "Box.h"

// Box constructor
Box::Box(double aLength, double aBreadth, double aHeight)
{
  double maxSide = aLength > aBreadth ? aLength : aBreadth;
  double minSide = aLength < aBreadth ? aLength : aBreadth;
  length = maxSide > 0.0 ? maxSide : 1.0;
  breadth = minSide > 0.0 ? minSide : 1.0;
  height = aHeight > 0.0 ? aHeight : 1.0;
}

// Calculate Box volume
double Box::volume() const
{ 
  return length*breadth*height; 
}        

// getXXX() functions
double Box::getLength()  const { return length; }
double Box::getBreadth() const { return breadth; }
double Box::getHeight()  const { return height; }


