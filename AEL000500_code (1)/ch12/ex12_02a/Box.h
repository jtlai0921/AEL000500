// Box.h
#ifndef BOX_H
#define BOX_H

class Box
{
  public:
    double length;
    double breadth;
    double height;

    // Constructor
    Box(double lengthValue, double breadthValue, double heightValue);

    // Function to calculate the volume of a box
    double volume();
};

#endif
