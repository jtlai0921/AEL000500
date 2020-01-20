// Carton.cpp
#include "Carton.h"
#include <cstring>
#include <iostream>
using namespace std;

// Constructor
Carton::Carton(double lv, double bv, double hv,     
               const char* pStr, double dense, double thick):
                      Box(lv, bv, hv), density(dense), thickness(thick)
{
  pMaterial = new char[strlen(pStr)+1];     // Allocate space for the string
  strcpy( pMaterial, pStr);                 // Copy it
  cout << "Carton constructor" << endl;
}

// Destructor
Carton::~Carton()
{
  cout << "Carton destructor" << endl;
  delete[] pMaterial;
}

// "Get carton weight" function
double Carton::getWeight() const
{ 
  return 2*(length*breadth + breadth*height + height*length)*thickness*density;
}
