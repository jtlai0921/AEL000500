// Box.h Definition of the Box class
#ifndef BOX_H
#define BOX_H

class Box
{
  public:
    // Constructors
    Box();
    Box(double lengthValue, double breadthValue, double heightValue);

    // Function to calculate the volume of a box
    double volume() const;

    // Function to compare two Box objects
    int compareVolume(const Box& otherBox) const;

  private:
    double length;
    double breadth;
    double height;
};

#endif
