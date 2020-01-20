// Program 5.8 Using a nested loop to generate multiplication tables
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
  int table = 0;                                // Table size
  const int table_min = 2;                      // Minimum table size
  const int table_max = 12;                     // Maximum table size
  char ch = 0;                                  // Response to prompt

  do
  {
    cout << endl
         << "What size table would you like ("
         << table_min << " to " << table_max << ")? ";
    cin >> table;                               // Get the table size
    cout << endl;

    // Make sure table size is within the limits
    if(table < table_min || table > table_max)
    {
      cout << "Invalid table size entered. Program terminated." << endl;
      exit(1);
    }

    // Create the top line of the table
    cout << "     |";
    {
	  for(int i = 1 ; i <= table ; i++)
        cout << " " << setw(3) << i << " |";
	}
    cout << endl; 

    // Create the separator row
    {
	  for(int i = 0 ; i <= table ; i++)
        cout << "------";
	}
    cout << endl;

    for(int i = 1 ; i <= table ; i++)           // Iterate over the rows
    {
      cout << " " << setw(3) << i << " |";      // Start the row

      // Output the values in a row
      for(int j = 1 ; j <= table ; j++)
        cout << " " << setw(3) << i*j << " |";  // One for each column
      cout << endl;                             // End the row
    }

    // Check if another table is required
    cout << endl << "Do you want another table (y or n)? ";
    cin >> ch;
    cout << endl;
  } while(tolower(ch) == 'y');

  return 0;
}
