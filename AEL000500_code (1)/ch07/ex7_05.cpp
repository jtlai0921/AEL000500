// Program 7.5 Sorting strings using pointers
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;                                            // The string to be sorted
  const string separators = " ,.\"\n";                    // Word delimiters
  const int max_words = 1000;                             // Maximum number of words
  string words[max_words];                                // Array to store the words
  string* pwords[max_words];                              // Array of pointers to the words

  // Read the string to be searched from the keyboard
  cout << endl << "Enter a string terminated by #:" << endl;
  getline(cin, text, '#');

  // Extract all the words from the text
  int start = text.find_first_not_of(separators);         // Word start index
  int end = 0;                                            // End delimiter index
  int word_count = 0;                                     // Count of words stored
  while(start != string::npos && word_count < max_words)
  {
    end = text.find_first_of(separators, start + 1);
    if(end == string::npos)                               // Found a separator?
      end = text.length();                                // No, so set to last + 1

    words[word_count] = text.substr(start, end - start);  // Store the word
    pwords[word_count] = &words[word_count];              // Store the pointer
    word_count++;                                         // Increment count

    // Find the first character of the next word
    start = text.find_first_not_of(separators, end + 1);
  }

  // Sort the words in ascending sequence by direct insertion
  int lowest = 0;                                         // Index of lowest word

  for(int j = 0; j < word_count-1; j++)
  {
    lowest = j;                                           // Set lowest 

    // Check current against all the following words
    for(int i = j + 1 ; i < word_count ; i++)
      if(*pwords[i] < *pwords[lowest])                    // Current is lower?
        lowest = i; 

	if(lowest != j)
    {                                                     // Then swap pointers
      string* ptemp = pwords[j];                          // Save current
      pwords[j] = pwords[lowest];                         // Store lower in current
      pwords[lowest] = ptemp;                             // Restore current
    }
  }

  // Output up to six words to a line in groups starting with the same letter
  char ch = (*pwords[0])[0];                              // First letter of first word
  int words_in_line = 0;                                  // Words in a line count
  for(int i = 0; i < word_count ; i++)
  {
    if(ch != (*pwords[i])[0])                             // New first letter?
    {
      cout << endl;                                       // Start a new line
      ch = (*pwords[i])[0];                               // Save the new first letter
      words_in_line = 0;                                  // Reset words in line count
    }
    cout << *pwords[i] << "  ";
    if(++words_in_line == 6)                              // Every sixth word
    {
      cout << endl;                                       // Start a new line
      words_in_line = 0;
    }
  }

  cout << endl;
  return 0;
}
