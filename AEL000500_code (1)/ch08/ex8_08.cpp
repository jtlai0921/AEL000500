// Program 8.8 Using reference parameters
#include <iostream>

using namespace std;

int larger(const int& m, const int& n);

int main()
{
  int value1 = 10;
  int value2 = 20;
  cout << endl << larger(value1, value2) << endl;
  cout << endl << larger(value1, 15) << endl;

  return 0;
}

// Function to the larger of two integers
int larger(const int& m, const int& n)
{
  return m > n ? m : n;              // Return the larger value
}
