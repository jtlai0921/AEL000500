// Program 20.11 {rbegin} Problem with non-template algorithm
#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

// Display a sequence of elements
void show_sequence(const int* first, const int* last) 
{
  cout << "{ ";
  copy(first, last, ostream_iterator<int>(cout, " "));
  cout << "}" << endl;
}

int main()
{
  int values[] = { 11, 88, 99 };
  vector<int> V(values, values+3);

  show_sequence(V.begin(), V.end());              // Might work, might not

//show_sequence(V.rbegin(), V.rend());            // Uncomment for an error 
  copy(V.rbegin(), V.rend(), ostream_iterator<int>(cout, ".0 "));

  cout << endl;
  return 0; 
} 
