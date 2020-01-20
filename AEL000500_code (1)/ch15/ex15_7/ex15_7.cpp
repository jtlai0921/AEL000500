// Program 15.7 Using multiple inheritance
#include <iostream>
#include "CerealPack.h"                                     // For the CerealPack class

using namespace std;

int main()
{
  CerealPack packOfFlakes(8.0, 3.0, 10.0, "Cornflakes");

  cout << endl;
  cout << "packOfFlakes volume is " << packOfFlakes.volume() << endl;  
  cout << "packOfFlakes weight is " << packOfFlakes.getWeight() << endl
       << endl; 

  return 0;
}
