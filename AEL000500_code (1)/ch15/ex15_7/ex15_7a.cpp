// Program 15.7a Using multiple inheritance --- compilable version!
#include <iostream>
#include "CerealPack.h"                                     // For the CerealPack class

using namespace std;

int main()
{
  CerealPack packOfFlakes(8.0, 3.0, 10.0, "Cornflakes");

cout << endl; 
  cout << "packOfFlakes volume is " << packOfFlakes.Carton::volume() << endl;
  cout << "packOfFlakes weight is "    
       << packOfFlakes.Carton::getWeight()+packOfFlakes.Contents::getWeight() << endl
       << endl; 

  return 0;
}
