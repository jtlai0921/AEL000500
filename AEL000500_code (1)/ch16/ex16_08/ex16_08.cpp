// Program 16.8 Destroying objects through a pointer
#include <iostream>
#include "Box.h"                                    // For the Box class
#include "ToughPack.h"                              // For the ToughPack class
#include "Carton.h"                                 // For the Carton class
#include "Can.h"                                    // for the Can class

using namespace std;

int main()
{
  Vessel* pVessels[] = { new Box(40, 30, 20),    new Can(10, 3),
                         new Carton(40, 30, 20), new ToughPack(40, 30, 20) };

  cout << endl;
  for(int i = 0 ; i < sizeof pVessels / sizeof(pVessels[0]) ; i++)
    cout << "Volume is " << pVessels[i]->volume() << endl;

  // Delete the objects from the free store
  {
    for(int i = 0 ; i < sizeof pVessels / sizeof(pVessels[0]) ; i++)
      delete pVessels[i];
  }
  return 0;
}
