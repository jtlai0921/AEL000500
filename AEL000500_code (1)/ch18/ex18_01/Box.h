// Box.h
#ifndef BOX_H
#define BOX_H

class Box
{
  public:
    Box(double lengthValue = 1.0, double breadthValue = 1.0, double heightValue = 1.0);

    // Function to show the volume of an object
    void showVolume() const;

    // Function to calculate the volume of a Box object
    virtual double volume() const;

    // Get values of data members
    double getLength() const { return length; }
    double getBreadth() const { return breadth; }
    double getHeight() const { return height; }

  protected:
    double length;
    double breadth;
    double height;
};

#endif