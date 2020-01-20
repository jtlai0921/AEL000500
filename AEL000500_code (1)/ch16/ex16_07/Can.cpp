// Can.cpp
#include "Can.h"

Can::Can(double canDiameter, double canHeight) : diameter(canDiameter),
                                                 height(canHeight)
{}

// Function to calculate the volume of a Can object
double Can::volume() const
{
  return pi * diameter * diameter * height / 4;
}

// Definitions for the Can class
const double Can::pi = 3.14159265;                  // Initialize static member
