// Program 5.9 Using the continue statement
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

using namespace std;

int main()
{
  // Output the column headings
  cout << endl
       << setw(13) << "Character  "
       << setw(13) << "Hexadecimal "
       << setw(13) << "Decimal   "
       << endl;

  cout << uppercase;                             // Uppercase hex digits

  unsigned char ch = 0;                          // Character code

  // Output characters and corresponding codes
  do
  {
    if(!isprint(ch))                             // If it does not print
      continue;                                  // skip this iteration

    cout << setw(7)  << ch
         << hex                                  // Hexadecimal mode
         << setw(13) << static_cast<int>(ch)
         << dec                                  // Decimal mode
         << setw(13) << static_cast<int>(ch)
         << endl;
  } while(ch++ < numeric_limits<unsigned char>::max());
  return 0;
}
