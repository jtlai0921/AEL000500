// Program 20.16 A TruckLoad container implemented using an STL list container
// Recapitulates Program 13.1
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class Box 
{
  public:
    Box(double l = 1.0, double w = 1.0, double h = 1.0) : L(l), W(w), H(h) {}

    double volume() const { return L*W*H; }
    bool operator<(const Box& x) const { return volume() < x.volume(); }

    friend ostream& operator<<(ostream& out, const Box& box) 
    {
      out << "(" << box.L << "," << box.W << "," << box.H << ")";
      return out;
    }

  private:
    double L;
    double W;
    double H;
};

class TruckLoad 
{
  typedef list<Box> Contents;

  public:
    TruckLoad() {}
    TruckLoad(const Box& one_box) : Load (1, one_box) {}

    template<typename FwdIter> 
    TruckLoad(FwdIter first, FwdIter last) : Load (first, last) {}

    void add_box(const Box& new_box) { Load.push_back (new_box); }

    typedef Contents::const_iterator const_iterator;

    const_iterator begin() const { return Load.begin(); }
    const_iterator end() const { return Load.end(); }

  private:
    Contents Load;
};

inline int random(int count)
{
  return 1 + static_cast<int>((count*static_cast<long>(rand()))/(RAND_MAX+1));
}

inline Box random_box(int range) 
{
  return Box(random(range),random(range),random(range));
} 

int main() 
{
  TruckLoad Rig(Box(30,30,30));
  for(int i = 0; i < 8; ++i) 
    Rig.add_box(random_box(100));

  cout << "Contents of Rig1" << endl;
  copy(Rig.begin(), Rig.end(), ostream_iterator<Box> (cout, "\n"));
  cout << endl;

  typedef TruckLoad::const_iterator BoxIter;
  BoxIter big_one = max_element(Rig.begin(), Rig.end());

  cout << "The biggest box in Rig1 is " << *big_one 
       << " with volume " << big_one->volume() << endl;
  cout << endl;

  cout << "Copying all boxes starting at big box to Rig2" << endl;
  TruckLoad Rig2(big_one, Rig.end());
  cout << "Contents of Rig2" << endl;
  copy(Rig2.begin(), Rig2.end(), ostream_iterator<Box> (cout, "\n"));
  cout << endl;

  return 0;
}
