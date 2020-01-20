// Program 8.9 Using multiple default parameter values
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void showData(const int data[], int count = 1,
                      const string& title = "Data Values", int width = 10, int perLine = 5);

int main()
{
  int samples[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  int dataItem = 99;
  showData(&dataItem);

  dataItem = 13;
  showData(&dataItem, 1, "Unlucky for some!");

  showData(samples, sizeof samples / sizeof samples[0]);
  showData(samples, sizeof samples / sizeof samples[0], "Samples");
  showData(samples, sizeof samples / sizeof samples[0], "Samples", 14);
  showData(samples, sizeof samples / sizeof samples[0], "Samples", 14, 4);

  return 0;
}

// Function to output one or more integer values
void showData(const int data[], int count, const string& title, int width, int perLine)
{
  cout << endl << title;                    // Display the title

  // Output the data values
  for(int i = 0 ; i < count ; i++)
  {
    if(i % perLine == 0)                    // Newline before the first
      cout << endl;                         // and after perLine

    cout << setw(width) << data[i];         // Display a data item
  }
  cout << endl;
}
