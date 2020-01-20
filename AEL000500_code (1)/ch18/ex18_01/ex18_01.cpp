// Program 18.1 Using a class template
#include "Box.h"
#include "Array.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int doubleCount = 50;
  Array<double> values(doubleCount);               // Class constructor instance created
  
  try
  {
    for(int i = 0 ; i < doubleCount ; i++)
      values[i] = i + 1;                           // Member function instance created
    
    cout << endl << "Sums of pairs of elements:";
    int lines = 0;
    for(int i = doubleCount - 1 ; i >= 0 ; i--)
      cout << (lines++ % 5 == 0 ? "\n" : "") << setw(5) << values[i] + values[i - 1];
  }
  catch(const out_of_range& ex)
  {
    cout << endl <<"out_of_range exception object caught! " << ex.what();
  }
  
  try
  {
    const int boxCount = 10;
    Array<Box> boxes(boxCount);                     // Template instance created
    for(int i = 0 ; i <= boxCount ; i++)
      cout << endl << "Box volume is " << boxes[i].volume();  // Member instance created
  }
  catch(const out_of_range& ex)
  {
    cout << endl << "out_of_range exception object caught! " << ex.what();
  }
  
  cout << endl;
  return 0;
}
