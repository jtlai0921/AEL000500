// Program 20.10 Full "random access" Integer iterator
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
#include <utility>
using namespace std::rel_ops;

class Integer : public iterator<random_access_iterator_tag, int, int, int*, int>
{
  public:
    Integer(int x=0) : X(x) {}                     // Default constructor

    Integer(const Integer& x) : X(x.X) {}          // Copy constructor

    ~Integer() {}                                  // Destructor

    Integer& operator=(const Integer& x)           // Assignment operator
    {
      X = x.X;
      return *this;
    }

    // Relational operators
    bool operator==(const Integer& x) const { return X == x.X; }
    bool operator!=(const Integer& x) const { return !(*this == x); } 
                                                        // delegate to operator==
    bool operator<(const Integer& x)  const { return X < x.X; }

    int operator*() const { return X; }
    int operator[](int n) const { return X+n; }

    // Bidirectional operators
    Integer& operator++() 
    {
      ++X;
      return *this;
    }

    Integer& operator--() 
    {
      --X;
      return *this;
    }

    Integer& operator++(int) 
    {
      Integer temp(*this);
      ++X;
      return temp;
    }

    Integer& operator--(int) 
    {
      Integer temp(*this);
      --X;
      return temp;
    }

    // Random access operators
    Integer operator+(int n) const { return Integer (X+n); }
    Integer operator-(int n) const { return Integer (X-n); }

  private: 
    int X;
};

int main() 
{
  Integer F1(-1);
  Integer L1(10);
  cout << "The values [-1..10) in forward order: " << endl; 
  copy (F1, L1, ostream_iterator<int>(cout, " "));
  cout << endl;

  typedef reverse_iterator<Integer> CountDown;
  CountDown F2(10);
  CountDown L2(-1);
  cout << "the values (10..-1] in reverse order: " << endl; 
  copy (F2, L2, ostream_iterator<int>(cout, " "));
  cout << endl;

  return 0;
}
