// ToughPack.cpp
#include <iostream>
#include "ToughPack.h"
using namespace std;

ToughPack::ToughPack(double lVal, double bVal, double hVal) : Box(lVal, bVal, hVal)
{}

double ToughPack::volume(const int i) const
{
  cout << "Parameter = " << i << endl;
  return 0.85 * length * breadth * height;
}