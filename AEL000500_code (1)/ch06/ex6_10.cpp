// Program 6.10 Searching a string for characters from a set
#include <iostream>
#include <string>

using namespace std;

int main()
{
  // The string to be searched
  string text = "Smith, where Jones had had \"had had\", had had \"had\"."
                " \"Had had\" had had the examiners' approval.";

  string separators = " ,.\"";                     // Word delimiters

  // Find the start of the first word
  int start = text.find_first_not_of(separators);
  int end = 0;                                     // Index for the end of a word

  // now find and output the words
  int word_count = 0;                              // Number of words
  cout << endl;
  while(start != string::npos)
  {
    end = text.find_first_of(separators, start + 1);
    if(end == string::npos)                        // Found a separator?
      end = text.length();                         // No, so set to last + 1

    cout << text.substr(start, end - start)        // Output the word
         << endl;
    word_count++;                                  // Increase the count

    // Find the first character of the next word
    start = text.find_first_not_of(separators, end + 1);
  }

  cout << "Your string contained "
       << word_count << " words."
       << endl;

  return 0;
}
