// Box.cpp
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(double lvalue, double bvalue, double hvalue) : length(lvalue),
                                                        breadth(bvalue),
                                                        height(hvalue)
{}

double Box::volume() const
{
  return length * breadth * height;
}

Box::~Box()
{
  cout << "Box destructor" << endl;
}