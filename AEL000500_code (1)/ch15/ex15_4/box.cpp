// Box.cpp
#include "box.h"
#include <iostream>
using namespace std;

// Default constructor
Box::Box() : length(1.0), breadth(1.0), height(1.0)
{ 
  cout << "Default Box constructor" << endl; 
}

// Constructor
Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv)
{ 
  cout << "Box constructor" << endl; 
}
