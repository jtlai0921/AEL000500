// Box.h
#ifndef BOX_H
#define BOX_H

class Box
{
  public:
    double length;
    double breadth;
    double height;

    // Constructors
    Box(double lengthValue = 1.0, double breadthValue = 1.0, double heightValue = 1.0);

    // Function to calculate the volume of a box
    double volume();
};

#endif
