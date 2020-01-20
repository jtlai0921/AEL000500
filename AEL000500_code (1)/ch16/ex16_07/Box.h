// Box.h
#ifndef BOX_H
#define BOX_H

#include "Vessel.h"

class Box : public Vessel
{
  public:
    Box(double lengthValue = 1.0, double breadthValue = 1.0, double heightValue = 1.0);

    // Function to calculate the volume of a Box object
    virtual double volume() const;

  protected:
    double length;
    double breadth;
    double height;
};

#endif