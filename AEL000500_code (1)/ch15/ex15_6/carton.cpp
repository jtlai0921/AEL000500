// Carton.cpp
#include "Carton.h"
#include <cstring>
#include <iostream>
using namespace std;

// Constructor which can also act as default constructor - 
//            calls default base constructor automatically
Carton::Carton(const char* pStr)
{
  pMaterial = new char[strlen(pStr)+1];     // Allocate space for the string
  strcpy( pMaterial, pStr);                 // Copy it
  cout << "Carton constructor 1" << endl;
}

// Constructor explicitly calling the base constructor
Carton::Carton(double lv, double bv, double hv, const char* pStr): Box(lv, bv, hv)
{
  pMaterial = new char[strlen(pStr)+1];     // Allocate space for the string
  strcpy(pMaterial, pStr);                  // Copy it
  cout << "Carton constructor 2" << endl;
}

// Copy constructor
Carton::Carton(const Carton& aCarton) : Box(aCarton)
{
  pMaterial = new char[strlen(aCarton.pMaterial)+1]; // Allocate space for the string
  strcpy(pMaterial, aCarton.pMaterial);              // Copy it 
  cout <<  "Carton copy constructor" << endl;
}

// Destructor
Carton::~Carton()                                  
{
  cout << "Carton destructor. Material = " << pMaterial << endl;
  delete[] pMaterial;
}


// Function to calculate the volume of a Carton object
double Carton::volume() const 
{ 
  return length*breadth*height; 
}

