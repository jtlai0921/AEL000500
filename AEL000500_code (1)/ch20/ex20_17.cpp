// Program 20.17 A simple word collocation
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

  for(WordIter m = M.begin() ; m != M.end() ; ++m) 
    cout << setw(6) << m->second << " " << m->first << endl;

  return 0;
}  
