// Box.h - Definition of the Box class
#ifndef BOX_H
#define BOX_H

class Box
{
  public:
    Box(double aLength = 1.0, double aBreadth = 1.0, double aHeight = 1.0); 
	                                              // Constructor

    double volume() const;                        // Calculate Box volume

    double getLength()  const; 
    double getBreadth() const;
    double getHeight()  const;

  	bool operator<(const Box& aBox) const         // Overloaded 'less-than' operator
	{                                             // Defined inline
      return volume() < aBox.volume(); 
	}

  private:
    double length;
    double breadth;
    double height;
};
#endif
