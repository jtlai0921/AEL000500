// Program 11.2 Using pointers to Box objects
#include <iostream>
using namespace std;

struct Box
{
  double length;
  double breadth;
  double height;

  double volume();                  // Function to calculate the volume of a box
};

int main()
{
  Box aBox = { 10, 20, 30 };
  Box* pBox = &aBox;                           // Store address of aBox
  cout << endl 
       << "Volume of aBox is " << pBox->volume() << endl;

  Box* pdynBox = new Box;                      // Create Box in the free store
  pdynBox->height = pBox->height+5.0;
  pdynBox->length = pBox->length-3.0;
  pdynBox->breadth = pBox->breadth-2.0;
  cout << "Volume of Box in the free store is " << pdynBox->volume() << endl;

  delete pdynBox;
  return 0;
}


// Box function to calculate volume
double Box::volume()
{
  return length * breadth * height;
}
