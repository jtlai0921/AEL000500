// Program 20.8 Averaging values from Integer
#include <iostream>
using namespace std;

class Integer 
{
  public:
    Integer (int arg = 0) : X(arg) {}            // Constructor

    bool operator!= (const Integer& arg) const   // != operator
    {
      return X != arg.X;
    }

    int operator*() const { return X; }          // * operator

    Integer& operator++()                        // Prefix ++ operator
    {
      ++X;
      return *this;
    }

    const Integer operator++(int)                // Postfix ++ operator
    {
      Integer temp(*this);                       // save our current value
      ++X;                                       // change to new value 
      return temp;                               // return unchanged saved value
    }

  private: 
    int X;
};

template <typename Iter> 
double average(Iter a, Iter end) 
{ 
  double sum = 0.0;
  int count = 0;  
  for( ; a != end ; ++count)
    sum += *a++;
  return sum/count;             // Lets bad things happen when count==0
} 

int main() 
{
  Integer first(1);
  Integer last(11);
  cout << "The average of the integers from " << *first << " to " << -1+*last;
  cout << " is " << average(first, last) << endl;
  return 0;
}
