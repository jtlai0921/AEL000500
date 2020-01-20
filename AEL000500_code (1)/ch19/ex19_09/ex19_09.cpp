// Program 19.9 Writing a stack to a stream
#include <fstream>
#include <iostream>
using namespace std;

#include "Stack.h"
#include "Box.h"

int main()
{
  Box Boxes[10];                                          // 10 default boxes

  for(int i = 0 ; i < 10 ; i++)                           // Create different objects
    Boxes[i] = Box(10 * (i + 1), 10 * (i + 2), 10 * (i + 3));

  Stack<Box> boxStack;                                    // A stack for Box objects

  // Push all Box objects onto the stack
  for(int j = 0 ; j < 10 ; j++)
    boxStack.push(Boxes[j]);

  const string boxFileName = "C:\\JunkData\\boxes.txt";   // Stack file
  ofstream outBoxFile(boxFileName.c_str());               // Output file stream for file

  outBoxFile << boxStack;                                 // Write the stack
  outBoxFile.close();                                     // Close the stream

  // Display volumes for original set
  while(!boxStack.isEmpty())
    cout << endl << "Volume = " << boxStack.pop().volume();

  Stack<Box> copyBoxStack;                                // New stack for Box objects

  ifstream inBoxFile(boxFileName.c_str());                // Open input file stream
  inBoxFile >> copyBoxStack;                              // Read the stack

  // Output volumes of Box objects off the stack from the stream
  int k = 0;
  while(!copyBoxStack.isEmpty())
    cout << endl << "Volume of Box[" << (k++) << "] is " << copyBoxStack.pop().volume();

  cout << endl;
  return 0;
}
