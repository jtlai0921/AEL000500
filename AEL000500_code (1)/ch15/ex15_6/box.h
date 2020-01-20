// Box.h - defines Box class
#ifndef BOX_H
#define BOX_H 
class Box
{
  public:  
    Box();                                    // Default constructor

    Box(double lv, double bv, double hv);     // Constructor

    Box(const Box& aBox);                     // Copy constructor

	~Box();                                   // Destructor

  protected:
    double length;
    double breadth;
    double height;
};
#endif