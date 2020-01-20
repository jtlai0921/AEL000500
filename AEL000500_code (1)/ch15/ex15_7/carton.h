// Carton.h - defines the Carton class with the Box class as base
#ifndef CARTON_H
#define CARTON_H 
#include "Box.h"                           // For Box class definition
#include <cstring>

class Carton : public Box
{
  public:
    Carton(double lv = 1, double bv = 1, double hv = 1,  // Constructor
           const char* pStr = "Cardboard",
           double dense = 0.125, double thick = 0.2);

    // Constructor explicitly calling the base constructor

    ~Carton();                             // Destructor

    double getWeight() const;              // "Get carton weight" function

  protected:
    char* pMaterial;                       // Carton material
    double thickness;                      // Material thickness inches
    double density;                        // Material density in pounds/cubic inch
};
#endif
