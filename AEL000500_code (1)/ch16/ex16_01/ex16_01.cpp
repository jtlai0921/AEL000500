// Program 16.1 Behavior of inherited functions in a derived class
#include <iostream>
#include "Box.h"                                    // For the Box class
#include "ToughPack.h"                              // For the ToughPack class

using namespace std;

int main()
{
  Box myBox(20.0, 30.0, 40.0);                      // Declare a base box
  ToughPack hardcase(20.0, 30.0, 40.0);             // Declare derived box - same size

  cout << endl; 
  myBox.showVolume();                               // Display volume of base box
  hardcase.showVolume();                            // Display volume of derived box

  cout << "hardcase volume is " << hardcase.volume() << endl;
  Box *pBox = &hardcase;
  cout << "hardcase volume through pBox is " << pBox->volume() << endl;

  return 0;
}
