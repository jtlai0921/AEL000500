// Program 20.7 Simple integer iterator class
#include <iostream>
using namespace std;

class Integer 
{
  public:
    Integer (int arg = 0) : X(arg) {}

    bool operator!=(const Integer& arg) const        // Comparison !=
    {
      if (X == arg.X)                                // Debugging output
        cout << endl 
             << "operator!= returns false" << endl;  // Just to show that we are here  
      return X != arg.X;
    }

    int operator*() const { return X; }              // De-reference operator

    Integer& operator++()                            // Prefix increment opertor
    {
      ++X;
      return *this;
    }

  private: 
    int X;
};

int main() 
{
  Integer begin(3);
  Integer end(7);
  cout << "Today's integers are: ";
  for( ; begin != end ; ++begin) 
    cout << *begin << " ";
  cout << endl;
  return 0;
}
