// ToughPack.cpp
#include "ToughPack.h"

ToughPack::ToughPack(double lVal, double bVal, double hVal) : Box(lVal, bVal, hVal)
{}

double ToughPack::volume() const
{
  return 0.85 * length * breadth * height;
}