// Program 6.4 Analyzing the letters in a string
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int maxlength = 100;                 // Array dimension
  char text[maxlength] = {0};                // Array to hold input string

  cout << endl << "Enter a line of text:" << endl; 

  // Read a line of characters including spaces
  cin.get(text, maxlength);

  cout << "You entered:" << endl << text << endl;

  int vowels = 0;                            // Count of vowels
  int consonants = 0;                        // Count of consonants
  for(int i = 0 ; text[i] != '\0' ; i++)
    if(isalpha(text[i]))                     // If it is a letter
      switch(tolower(text[i]))               // Test lower case version
      {
        case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
          vowels++;                          // It is a vowel
          break;
        default:
          consonants++;                      // It is a consonant
          break;
      }

  cout << "Your input contained "
       << vowels     << " vowels and "
       << consonants << " consonants."
       << endl;

  return 0;
}
