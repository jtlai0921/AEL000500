// Program 20.18 An inverted word collocation
#pragma warning ( disable : 4786)

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <map>

using namespace std;

const char* twister = 
  "How much wood would a woodchuck chuck if a woodchuck " 
  "could chuck wood?  A woodchuck would chuck as much wood " 
  "as a woodchuck could chuck if a woodchuck could chuck wood.";

int main() 
{
  typedef map<string, int> Collocation; 
  typedef Collocation::const_iterator WordIter; 
  
  Collocation M;

  istringstream text(twister);
  istream_iterator<string> begin(text);
  istream_iterator<string> end;

  for( ; begin != end ; ++begin) 
    M[*begin]++;

  typedef multimap<int,string,greater<int> > WordRank;
  typedef WordRank::const_iterator RankIter;

  WordRank R;

  for(WordIter m = M.begin() ; m != M.end() ; ++m) 
    R.insert(make_pair(m->second,m->first));

  for(RankIter r = R.begin() ; r != R.end() ; ++r) 
    cout << setw(6) << r->first << " " << r->second << endl;

  return 0;
}
