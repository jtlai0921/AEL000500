// Program 6.11 Replacing words in a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
  // Read the string to be searched from the keyboard
  string text;
  cout << endl << "Enter a string terminated by #:" << endl;
  getline(cin, text, '#');

  // Get the word to be replaced
  string word;
  cout << endl << "Enter the word to be replaced: ";
  cin >> word;

  // Get the replacement
  string replacement;
  cout << endl << "Enter the replacement word: ";
  cin >> replacement;

  if(word == replacement)
  {
    cout << endl 
         << "The word and its replacement are the same." << cout
         << "Operation aborted." << cout;
    exit(1);
  }

  // Find the start of the first occurrence of word
  int start = text.find(word);

  // Now find and replace all occurrences of word
  while(start != string::npos)
  {
    text.replace(start, word.length(), replacement);         // Replace word
    start = text.find(word, start + replacement.length());
  }

  cout << endl 
       << "Your string is now:" << endl 
       << text << endl;

  return 0;
}
