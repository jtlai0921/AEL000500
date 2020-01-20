// Box.h - defines Box class
#ifndef BOX_H
#define BOX_H 
class Box
{
  public:  
    Box(double lv=1, double bv=1, double hv=1); // Constructor

    Box(const Box& aBox);                       // Copy constructor

    ~Box();                                     // Destructor
    
    // Function to calculate the volume of a Box object
    double volume() const;
  
  protected:
    double length;
    double breadth;
    double height;
};
#endif 
