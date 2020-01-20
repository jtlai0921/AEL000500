// Program 20.5 Taking the average of values from a stream
#include <iostream>
#include <iterator>             // For the istream_iterator<> template
using namespace std;

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
  cout << "Enter some real numbers separated by whitespace - spaces, " << endl
       << "tabs or newline. Then press the special key sequence " << endl
	   << "that marks the end-of-file (Ctrl-Z on a PC)" << endl;

  double av = average(istream_iterator<double>(cin), istream_iterator<double>());
  cout << "The average value is " << av << endl;
  return 0;
}
