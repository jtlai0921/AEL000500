// Program 15.5 Using a derived class copy constructor
#include <iostream>
#include "Box.h"                                       // For the Box class
#include "Carton.h"                                    // For the Carton class

using namespace std;

int main()
{
   Carton candyCarton(20.0, 30.0, 40.0, "Glassine board"); // Declare and initialize
   Carton copyCarton(candyCarton);                         // Use copy constructor

   cout << endl
        << "Volume of candyCarton is " << candyCarton.volume()
        << endl
        << "Volume of copyCarton is " << copyCarton.volume()
        << endl;

   return 0;
}
