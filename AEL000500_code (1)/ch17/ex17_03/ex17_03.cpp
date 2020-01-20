// Program 17.3 Throw an exception object
#include <iostream>
#include "MyTroubles.h"
using namespace std;

int main()
{
  for(int i = 0 ; i < 2 ; i++)
  {
    try
    {
      if(i == 0)
        throw Trouble();
      else
        throw Trouble("Nobody knows the trouble I've seen...");
    }
    catch(const Trouble& t)
    {
      cout << endl << "Exception: " << t.what();
    }
  }
  return 0;
}
