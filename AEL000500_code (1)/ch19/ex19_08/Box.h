// Box.h
#ifndef BOX_H
#define BOX_H

class Box
{
  public:
    // Constructor
    Box(double lv = 1, double bv = 1, double hv = 1);

    // Virtual Destructor
    virtual ~Box();

    // Function to show the volume of an object
    void showVolume() const;

    // Function to calculate the volume of a Box object
    virtual double volume() const;

	// Friend insertion and extraction operators
    friend ostream& operator<<(ostream& out, const Box& rBox);
    friend istream& operator>>(istream& in, Box& rBox);

  protected:
    double length;
    double breadth;
    double height;
};

#endif
