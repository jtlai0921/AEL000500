// Program 17.5 Catching exceptions with a base class handler
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
      if(i < 3)
        throw trouble;
      if(i < 5)
        throw moreTrouble;
      else
        throw bigTrouble;
    }
//    catch(BigTrouble& rT)
//    {
//      cout << "  BigTrouble object caught: " << rT.what() << endl;
//    }
//    catch(MoreTrouble& rT)
//    {
//      cout << " MoreTrouble object caught: " << rT.what() << endl;
//    }
    catch(Trouble t)
    {
      cout << typeid(t).name() << " object caught: " << t.what() << endl;
    }

    cout << "End of the for loop (after the catch blocks) - i is " << i << endl;
  }

  cout << endl;
  return 0;
}
