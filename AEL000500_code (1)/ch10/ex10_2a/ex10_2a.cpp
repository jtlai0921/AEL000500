// Program 10.2 Using a namespace   Prog10_2.cpp
#include <iostream>
#include <string>

namespace data
{
  extern const double pi;               // Variable is defined in another file
  extern const std::string days[];      // Array is defined in another file
}

using namespace std;

int main()
{
  cout << endl
       << "pi has the value " 
       << data::pi << endl;

  cout << "The second day of the week is " 
       << data::days[1] << endl;

  return 0;
}
