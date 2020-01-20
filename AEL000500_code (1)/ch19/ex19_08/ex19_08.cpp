// Program 19.8 Writing Box objects to a file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include "Box.h"

int main()
{
  try
  {
    const string filename = "C:\\JunkData\\boxes.txt";

    ofstream out(filename.c_str());
    if(!out)
      throw(ios::failure(string("Failed to open output file ") + filename));

    Box bigBox(50, 60, 70);
    Box smallBox(2,3,4);
  
    out << bigBox << smallBox;
    out.close();

    cout << endl << "Wrote two Box objects to the file:";
    cout << endl << "bigBox is " << bigBox;
    cout << endl << "smallBox is " << smallBox;
    cout << endl;

    ifstream in(filename.c_str());
    if(!in)
      throw(ios::failure(string("Failed to open input file ") + filename));

    cout << endl << "Reading objects from the file:";
    Box newBox;                                              // Default Box object

    in >> newBox;
    cout << endl << "First Box read is " << newBox;
    in >> newBox;
    cout << endl << "Second Box read is " << newBox;
    cout << endl;
    return 0;
  }
  catch(exception& ex)
  {
    cout << endl << typeid(ex).name() << ": " << ex.what() << endl;
    return 0;
  }
}