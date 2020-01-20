// Carton.cpp
#include "Carton.h"
#include <cstring>
#include <iostream>
using namespace std;

// Constructor
Carton::Carton(const char* pStr)     
{
  cout << "Carton constructor" << endl;
  pMaterial = new char[strlen(pStr)+1];     // Allocate space for the string
  strcpy( pMaterial, pStr);                 // Copy it
}

// Destructor
Carton::~Carton()                                  
{
  delete[] pMaterial; 
}

// Function to calculate the volume of a Carton object
double Carton::volume() const 
{ 
  return length*breadth*height; 
}
