// Program 6.8 Comparing strings
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  const int max_names = 6;                           // Maximum number of names
  string names[max_names];                           // Array of names
  int count = 0;                                     // Number of names
  char answer = 0;                                   // Response to a prompt

  do
  {
    cout << endl << "Enter a name: ";
    cin >> names[count++];                           // Read a name

    cout << endl << "Do you want to enter another name? (y/n): ";
    cin >> answer;                                   // Read response
  } while(count < max_names && tolower(answer) == 'y');

  // Indicate when array is full
  if(count == max_names)
    cout << endl << "Maximum name count reached." << endl;

  // Find the minimum and maximum names
  int index_of_max = 0;
  int index_of_min = 0;

  for(int i = 1 ; i < count ; i++)
    if(names[i].compare(names[index_of_max]) > 0)        // Current name greater?
      index_of_max = i ;                                 // then it is new maximum
    else if(names[i].compare(names[index_of_min]) < 0)   // Current name less?
      index_of_min = i;                                  // then it is new minimum

  // Output the minimum and maximum names
  cout << endl
       << "The minimum name is " << names[index_of_min]
       << endl;
  cout << "The maximum name is " << names[index_of_max]
       << endl;
  return 0;
}
