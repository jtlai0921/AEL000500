// Program 14.3 Overloading the copy assignment operator
#include <iostream>
#include <cstring>
using namespace std;

#include "ErrorMessage.h"

int main()
{
  ErrorMessage warning("There is a serious problem here");
  ErrorMessage standard;

  cout << endl << "warning contains - " << warning.what();
  cout << endl << "standard contains - " << standard.what();

  standard = warning;                               // Use copy assignment operator

  cout << endl << "After assigning the value of warning, standard contains - " 
       << standard.what();

  cout << endl << "Resetting warning, not standard" << endl;
  warning.resetMessage();                           // Reset the Warning message

  cout << endl << "warning now contains - " << warning.what();
  cout << endl << "standard now contains - " << standard.what();
  cout << endl;

  return 0;
}
