// Cerealpack.cpp
#include <iostream>
#include "Carton.h"
#include "Contents.h"
#include "Cerealpack.h"
using namespace std;

// Constructor
CerealPack::CerealPack(double length, double breadth, double height, const char* cerealType):
                    Carton(length, breadth, height, "cardboard"), 
                    Contents(cerealType)
{
  cout << "CerealPack constructor" << endl; 
  Contents::volume = 0.9*Carton::volume();         // Set contents volume
}

// Destructor
CerealPack::~CerealPack()                          
{
  cout << "CerealPack destructor" << endl; 
}
