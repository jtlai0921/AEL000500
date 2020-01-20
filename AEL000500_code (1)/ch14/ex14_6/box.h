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

    bool operator<(const Box& aBox) const;        // Compare Box < Box 
    bool operator<(const double aValue) const;    // Compare Box < double value
    Box operator+(const Box& aBox) const;         // Function to add two Box objects	

  private:
    double length;
    double breadth;
    double height;
};

// Function comparing Box object < Box object
inline bool Box::operator<(const Box& aBox) const
{
  return volume() < aBox.volume();
}

// Function comparing Box object < double value
inline bool Box::operator<(const double aValue) const
{
  return volume() < aValue;
}

// Function comparing double value < Box object
inline bool operator<(const double aValue, const Box& aBox)
{
  return aValue < aBox.volume();
}

// Function to add two Box objects
inline Box Box::operator+(const Box& aBox) const
{
   // New object has larger length and breadth, and sum of heights
   return Box( length  > aBox.length  ? length  : aBox.length,
               breadth > aBox.breadth ? breadth : aBox.breadth,
               height + aBox.height );
}
#endif




