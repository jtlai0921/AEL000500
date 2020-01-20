// Program 2.5 - Figuring for fish in floating point

#include <iostream>                      // For output to the screen
#include <cmath>                         // For square root calculation
using namespace std;

int main()
{
  double fish_count = 20.0;
  double ave_length = 9.0 / 12.0;        // Average length of fish in feet
  double pond_area = 0.0;
  double pond_diameter = 0.0;
  const double fish_factor = 2.0 / 0.5;  // Area per unit length of fish
  const double pi = 3.14159265;

  // Calculate the required surface area
  pond_area = fish_count * ave_length * fish_factor;

  // Calculate the pond diameter from the area
  pond_diameter = 2.0 * sqrt(pond_area / pi);

  cout << endl
       << "Pond diameter required is "
       << pond_diameter
	   << " feet.";

  cout << endl;
  return 0;
}
