// Program 18.2 Using non-type parameters in a class template
#include "Box.h"
#include "Array.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  try
  {
    const int size = 21;                              // Number of array elements
    const int start = -10;                            // Index for first element
    const int end = start + size - 1;                 // Index for last element

    Array<double, start> values(size);                // Declare array for double values

    for(int i = start;  i <= end ; i++)               // Initialize the elements
      values[i] = i - start + 1;

    cout << endl<< "Sums of pairs of elements: ";
    int lines = 0;
    for( int i = end ; i >= start ; i--)
      cout << (lines++ % 5 == 0 ? "\n" : "") << setw(5) << values[i] + values[i - 1];
  }
  catch(const out_of_range& ex)
  {
    cout << endl << "out_of_range exception object caught! " << ex.what();
  }
  catch(const exception& ex)
  {
    cout << endl << ex.what();
  }

  try
  {
    const int start = 0;
    const int size = 11;
   
    Array<Box, start - 5> boxes(size);

    for(int i = start - 5 ; i <= start + size - 5 ; i++)
       cout << endl << "Box volume is " << boxes[i].volume();
  }
  catch(const exception& ex)
  {
    cout << endl << typeid(ex).name() << " exception caught! "<< ex.what();
  }

  cout << endl;
  return 0;
}
