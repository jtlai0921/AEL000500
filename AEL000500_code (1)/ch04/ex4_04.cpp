// Program 4.4 Using standard library character testing and conversion
#include <iostream>
#include <cctype>                   // Character testing and conversion
using namespace std;

int main()
{
  char letter = 0;                  // Store input in here

  cout << endl
       << "Enter a letter: ";       // Prompt for the input
  cin >> letter;                    // then read a character
  cout << endl;

  if(isupper(letter))               // Test for upper case letter
  {
    cout << "You entered a capital letter."
         << endl;
    cout << "Converting to lower case we get "
         << static_cast<char>(tolower(letter)) << endl;
    return 0;
  }

  if(islower(letter))               // Test for lower case letter
  {
    cout << "You entered a small letter."
         << endl;
    cout << "Converting to upper case we get "
         << static_cast<char>(toupper(letter)) << endl;
    return 0;
  }

  cout << "You did not enter a letter." << endl;
  return 0;
}
