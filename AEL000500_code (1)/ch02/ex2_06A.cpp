// Program 2.6A Experimenting with floating point output
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float value1 = 0.1f;
  float value2 = 2.1f;
  value1 -= 0.09f;                        // Should be 0.01
  value2 -= 2.09f;                        // Should be 0.01

  cout << setprecision(14) << fixed;      // Change to fixed notation
  cout << value1 - value2 << endl;        // Should output zero

  cout << setprecision(5) << scientific;  // Return to scientific notation
  cout << value1 - value2 << endl;        // Should output zero

  return 0;
}
