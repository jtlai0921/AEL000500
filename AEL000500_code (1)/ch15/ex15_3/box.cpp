// Box.cpp
#include "box.h"
#include <iostream>
using namespace std;

// Constructor
Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv)
{
  cout << "Box constructor" << endl;
}

