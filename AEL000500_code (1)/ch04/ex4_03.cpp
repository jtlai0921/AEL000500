// Program 4.3 Using a nested if
#include <iostream>
using namespace std;

int main()
{
  char letter = 0;                      // Store input in here

  cout << endl
       << "Enter a letter: ";           // Prompt for the input
  cin >> letter;                        // then read a character
  cout << endl;

  if(letter >= 'A')                     // Test for 'A' or larger
  {
    if(letter <= 'Z')                   // Test for 'Z' or smaller
    {
      cout << "You entered an upper case letter."
           << endl;
      return 0;
    }
  }

  if(letter >= 'a')                     // Test for 'a' or larger
    if(letter <= 'z')                   // Test for 'z' or smaller
    {
      cout << "You entered a lower case letter."
           << endl ;
      return 0;
    }

  cout << "You did not enter a letter." << endl;
  return 0;
}
