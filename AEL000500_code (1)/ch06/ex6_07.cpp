// Program 6.7 Accessing characters in a string
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string text;                                // Stores the input

  cout << endl << "Enter a line of text:" << endl;

  // Read a line of characters including spaces
  getline(cin, text);

  int vowels = 0;                            // Count of vowels
  int consonants = 0;                        // Count of consonants
  for(int i = 0 ; i < text.length() ; i++)
    if(isalpha(text[i]))                     // Check for a letter
      switch(tolower(text[i]))               // Test lower case
      {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          vowels++;
          break;
        default:
          consonants++;
          break;
      }

  cout << "Your input contained "
       << vowels     << " vowels and "
       << consonants << " consonants."
       << endl;

  return 0;
}
