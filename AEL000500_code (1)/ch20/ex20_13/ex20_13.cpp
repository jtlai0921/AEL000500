// Program 20.13 A first run with the account class
#include <iostream>
#include "Account.h"
using namespace std;

int main() 
{ 
  Account A;    

  cout << "First audit" << endl;
  A << "event1";
  A << "event2";
  A << "event1";
  A.audit();

  cout << "Second audit" << endl;
  A << "torpedo";
  A << "event1";
  A.audit(); 

  return 0;
} 
