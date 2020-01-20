// Program 17.6 Rethrowing exceptions
#include <iostream>
#include "MyTroubles.h"

using namespace std;

int main()
{
  Trouble trouble;
  MoreTrouble moreTrouble;
  BigTrouble bigTrouble;

  cout << endl;
  for(int i = 0 ; i < 7 ; i++)
  {
    try
    {
      try
      {
        int j = i;
        if(i < 3)
          throw trouble;
        if(i < 5)
          throw moreTrouble;
        else
          throw bigTrouble;
      }
      catch(Trouble& rT)
      {
        if(typeid(rT) == typeid(Trouble))
          cout << "Trouble object caught: " << rT.what() << endl;
        else
          throw rT;                                 // Rethrow current exception
      }
    }
    catch(Trouble& rT)
    {
      cout << typeid(rT).name() << " object caught: " << rT.what() << endl;
    }

    cout << "End of the for loop (after the catch blocks) - i is " << i << endl;
  }

  cout << endl;
  return 0;
}
