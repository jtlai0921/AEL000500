// Box.h - defines Box class
#ifndef BOX_H
#define BOX_H 
class Box
{
  public:  
    Box();                                    // Default constructor

    Box(double lv, double bv, double hv);     // Constructor

  protected:
    double length;
    double breadth;
    double height;
};
#endif