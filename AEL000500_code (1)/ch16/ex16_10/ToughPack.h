// ToughPack.h
#ifndef TOUGHPACK_H
#define TOUGHPACK_H

#include "Box.h"

class ToughPack : public Box           // Derived class
{
  public:
    // Constructor
    ToughPack(double lengthValue, double breadthValue, double heightValue);

    // Function to calculate volume of a ToughPack allowing 15% for packing
    virtual double volume() const;
};

#endif
