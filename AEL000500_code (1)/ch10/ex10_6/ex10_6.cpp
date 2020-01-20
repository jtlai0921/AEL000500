// Program 10.6 Debugging using the pre-processor
#include <iostream>
#include <cstdlib>                  // For random number generator
#include <ctime>                    // For time function

using namespace std;

#include "functions.h"

#define TESTINDEX

// Function to generate a random integer 0 to count-1
int random(int count)
{
  return static_cast<int>((count*static_cast<long>(rand()))/(RAND_MAX+1));
}

int main()
{
  int a = 10, b = 5;                // Starting values 
  int result = 0;                   // Storage for results

  // Declaration for an array of function pointers 
  int (*pfun[])(int, int) = {fun::sum, fun::product, fun::difference};

  int fcount = sizeof pfun/sizeof pfun[0];
  int select = 0;                             // Index for function selection
  srand(static_cast<unsigned>(time(0)));      // Seed the random number generator

  // Select function from the pointer array at random
  for(int i = 0 ; i < 10 ; i++)
  {
    select = random(fcount);        // Generate random index 0 to fcount-1 

    #ifdef TESTINDEX
    cout << "Random number = " << select << endl;
    if((select>=fcount) || (select<0))
    {
      cout << "Invalid array index = " << select << endl;
      return 1;
    }
    #endif

    result = pfun[select](a, b);    // Call random function

    cout << "result = " << result << endl;
  }
  result = pfun[1](pfun[0](a, b), pfun[2](a, b));
  cout << endl 
       <<"The product of the sum and the difference = " << result
       << endl;
  return 0;
}
