// Program 15.3 Using inherited protected members in a derived class 
#include <iostream>
#include "Box.h"                                       // For the Box class
#include "Carton.h"                                    // For the Carton class

using namespace std;

int main()
{
  // Create a Box and two Carton objects
  Box myBox(40.0, 30.0, 20.0);
  Carton myCarton;

  cout << endl;  
//cout << "myBox volume is "    << myBox.volume()     << endl; // Uncomment for error
  cout << "myCarton volume is " << myCarton.volume()  << endl;
//cout << "myCarton length is " << myCarton.length    << endl; // Uncomment for error

  return 0;
}
