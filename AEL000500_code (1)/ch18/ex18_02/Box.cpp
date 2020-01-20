// Box.cpp
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(double lvalue, double bvalue, double hvalue) : length(lvalue),
                                                        breadth(bvalue),
                                                        height(hvalue)
{}

void Box::showVolume() const
{
  cout << "Box usable volume is " << volume() << endl;
}

double Box::volume() const
{
  return length * breadth * height;
}
