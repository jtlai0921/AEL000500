// ToughPack.cpp
#include <iostream>
#include "ToughPack.h"
using namespace std;

ToughPack::ToughPack(double lVal, double bVal, double hVal) : Box(lVal, bVal, hVal)
{}

double ToughPack::volume() const
{
  return 0.85 * length * breadth * height;
}

ToughPack::~ToughPack()
{
  cout << "ToughPack destructor" << endl;
}