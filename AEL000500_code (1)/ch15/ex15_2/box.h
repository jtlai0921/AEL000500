// Box.h - defines Box class
#ifndef BOX_H
#define BOX_H 
class Box
{
  public:  
    Box(double lv=1.0, double bv=1.0, double hv=1.0);

// Function to calculate the volume of a Box object
    double volume() const;

  private:
    double length;
    double breadth;
    double height;
};

#endif