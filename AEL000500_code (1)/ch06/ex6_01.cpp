// Program 6.1 Using an array
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  const int max_heights = 10;                // Array size
  
  int height[max_heights];                   // Array of heights
  int count = 0;                             // Number of heights
  char reply = 0;                            // Reply to prompt

  // Input loop for heights. Read heights until we are done, or the array is full
  do
  {
    cout << endl 
         << "Enter a height as an integral number of inches: ";
    cin >> height[count++];

    // Check if another input is required
    cout << "Do you want to enter another (y or n)? ";
    cin >> reply;
  } while(count < max_heights && tolower(reply) == 'y'); 

  // Indicate when array is full
  if(count == max_heights)
    cout << endl  << "Maximum height count reached." << endl;

  // Calculate the average and display it
  double average = 0.0;                      // Stores average height
  {
    for(int i = 0; i < count ; i++)
      average += height[i];                  // Add a height
  }
  average /= count;                          // Divide by the number of heights
  cout << endl 
       << "Average height is " << average << " inches."
       << endl;

  // Calculate how many are above average height
  int above_average = 0;                     // Count of above average heights
  {
    for(int i = 0 ; i < count ; i++)
      if(height[i] > average)                // Greater than average?
        above_average++;                     // then increment the count
  }

  cout << "There "
       << (above_average == 1 ? "is " : "are ")
       << above_average << " height"
       << (above_average == 1 ? " " : "s ")
       << "above average."
       << endl;
  return 0;
}
