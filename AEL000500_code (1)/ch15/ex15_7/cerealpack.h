// Cerealpack.h - Class defining a carton of cereal
#ifndef CEREALPACK_H 
#define CEREALPACK_H
#include <iostream>
#include "Carton.h"
#include "Contents.h"

using namespace std;
class CerealPack: public Carton, public Contents
{
  public:
    CerealPack(double length, double breadth, double height, const char* cerealType);
                                 // Constructor

    ~CerealPack();               // Destructor
};
#endif
