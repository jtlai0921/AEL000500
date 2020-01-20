// Example 4.9 Multiple case actions
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  char letter = 0;
  cout << endl
       << "Enter a letter: ";
  cin >> letter;

  if(isalpha(letter))
    switch(tolower(letter))
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
         cout << endl << "You entered a vowel." << endl;
         break;
       default:
         cout << endl << "You entered a consonant." << endl;
         break;
    }
  else
    cout << endl << "You did not enter a letter." << endl;

  return 0;
}
