// Program 6.9 Searching a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
  // The string to be searched
  string text = "Smith, where Jones had had \"had had\", had had \"had\"."
                " \"Had had\" had had the examiners' approval.";

  string word = "had";                // Substring to be found

  cout << endl  << "The string is: " << endl << text << endl;

  // Count the number of occurrences of word in text
  int count = 0;                      // Count of sub-string occurrences

  for(int index = 0 ; (index = text.find(word, index)) != string::npos ;
                                                             index += word.length(), count++)
    ;

  cout << "Your text contained "
       << count << " occurrences of \""
       << word  << "\"."
       << endl;

  return 0;
}
