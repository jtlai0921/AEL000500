// Program 14.1 Exercising the overloaded 'less-than' operator
#include <iostream>
#include <cstdlib>               // For random number generator
#include <ctime>                 // For time function
using namespace std;

#include "Box.h"

// Function to generate random integers from 1 to count
inline int random(int count)
{
  return 1 + static_cast<int>((count*static_cast<long>(rand()))/(RAND_MAX+1));
}

int main()
{
  const int dimLimit = 100;      // Upper limit on Box dimensions
  srand((unsigned)time(0));      // Initialize the random number generator

  const int boxCount = 20;       // Number of elements in Box array
  Box boxes[boxCount];           // Array of Box objects
  
  for(int i = 0 ; i < boxCount ; i++)
    boxes[i] = Box(random(dimLimit), random(dimLimit), random(dimLimit));

  // Find the largest Box object in the array
  Box* pLargest = &boxes[0];

  for(int i = 1 ; i < boxCount ; i++)
    if(*pLargest < boxes[i])
      pLargest = &boxes[i];

  cout << endl
       << "The box with the largest volume has dimensions: "
       << pLargest->getLength()  << " by "
       << pLargest->getBreadth() << " by "
       << pLargest->getHeight()  << endl;
  return 0;
}
