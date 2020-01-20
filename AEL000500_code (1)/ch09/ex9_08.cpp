// Program 9.8 Sorting strings recursively

// NOTE: Due to a bug on certain compilers, you may have difficulty compiling this 
// code as it stands.  If so, delete the keyword "const" in the first line of the definition
// of the showWords() function, and do the same in the showWords() prototype. 

#include <iostream>
#include <string>

using namespace std;

void swap(string* pStr[], int first, int second);
void sort(string* pStr[], int start, int end);
int countWords(const string& text, const string& separators);
void extractWords(string* pStr[], const string& text, const string& separators);
void showWords(const string* pStr[], int count);

int main()
{
  string text;                                // The string to be sorted
  const string separators = " ,.\"\n";        // Word delimiters

  // Read the string to be searched from the keyboard
  cout << endl << "Enter a string terminated by #:" << endl;
  getline(cin, text, '#');

  int word_count = countWords(text, separators);       // Get count of words stored

  if(0 == word_count)
  {
    cout << endl << "No words in text." << endl;
    return 0;
  }

  string** pWords = new string*[word_count];     // Array of pointers to the words

  extractWords(pWords, text, separators);        // Create string objects for words
  sort(pWords, 0, word_count-1);                 // Sort the words 
  showWords(pWords, word_count);                 // Display the words

  // Delete words from free store
  for(int i = 0 ; i<word_count ; i++)
    delete pWords[i];

  // Now delete the array of pointers
  delete[] pWords;
  
  return 0;
}


// swap() function definition
void swap(string* pStr[], int first, int second)
{
  string* temp = pStr[first];
  pStr[first] = pStr[second];
  pStr[second] = temp;
}


// sort function definition
void sort(string* pStr[], int start, int end)
{
  // start index must be less than end index for 2 or more elements
  if(!(start<end))
    return;                                 // Less than 2 elements - nothing to do

  // Choose middle address to partition set
  swap(pStr, start, (start+end)/2);         // Swap middle address with start

  // Check words against chosen word
  int current = start;
  for(int i = start+1; i<=end ; i++)
    if(*(pStr[i]) < *(pStr[start]))         // Is word less than chosen word?
      swap(pStr, ++current, i);             // Yes, so swap to the left

    swap(pStr, start, current);             // Swap the chosen word with last in

    sort(pStr, start, current-1);           // Partition the left set
    sort(pStr, current+1, end);             // Partition the right set
}


// countWords() function definition
int countWords(const string& text, const string& separators)
{
  int start = text.find_first_not_of(separators);  // Word start index
  int end = 0;                                     // End delimiter index
  int word_count = 0;                              // Count of words stored
  while(start != string::npos)
  {
    end = text.find_first_of(separators, start+1);
    if(end == string::npos)                        // Found one?
      end = text.length();                         // No, so set to last+1

    word_count++;                                  // Increment count

    // Find the first character of the next word
    start = text.find_first_not_of(separators, end+1);
  }
  return word_count;
}


// extractWords() function definition
void extractWords(string* pStr[], const string& text, const string& separators)
{
  int start = text.find_first_not_of(separators);    // Start of first word
  int end = 0;                                       // Index for the end of a word
  int index = 0;                                     // Pointer array index

  while(start != string::npos)
  {
    end = text.find_first_of(separators, start+1);   // Find end separator
    if(end == string::npos)                          // Found one?
      end = text.length();                           // No, so set to last+1
    pStr[index++] = new string(text.substr(start, end-start));

    
    start = text.find_first_not_of(separators, end+1);   // Find start of next word
  }
}


// showWords() function definition
void showWords(const string* pStr[], int count)
{
  const int words_per_line = 5;                   // Word_per_line
  cout << endl << "  " << *pStr[0];               // Output the first word

  int words_in_line = 0;                          // Words in the current line
  for(int i = 1 ; i<count ; i++)                  // Output remaining words
  {
    // Start newline when initial letter changes or after 5 words on a line
    if((*pStr[i])[0] != (*pStr[i-1])[0] || words_in_line++ == words_per_line)
    {
      words_in_line = 0;                
      cout << endl;
    }
    cout << "  " << *pStr[i];                     // Output a word

    }
    cout << endl;
}


//from       'class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > ** ' 
//  to 'const class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *[]'
