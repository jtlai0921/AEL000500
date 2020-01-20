// Program 2.3 - Using the assignment operator

#include <iostream>                    // For output to the screen
using namespace std;

int main()
{
  int apples = 10;
  int oranges = 6;
  int boys = 3;
  int girls = 4;

  int fruit_per_child = (apples++) + 6;

  cout << endl
       << "Each child gets "
       << fruit_per_child << " fruit.";

  cout << endl;
  return 0;
}
