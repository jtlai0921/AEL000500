// Box.cpp
#include "box.h"
#include <iostream>
using namespace std;

// Default constructor
Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv)
{ 
  cout << "Box constructor" << endl; 
}

// Copy constructor
Box::Box(const Box& aBox) : 
                    length(aBox.length), breadth(aBox.breadth), height(aBox.height)
{
  cout << "Box copy constructor called" << endl;
}

// Destructor
Box::~Box()
{ 
  cout << "Box destructor" << endl;
}                  

// Function to calculate the volume of a Box object
double Box::volume() const 
{ 
  return length*breadth*height; 
}
