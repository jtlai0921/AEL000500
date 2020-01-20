// Program 20.4 Computing an average with template arrays
#include <iostream>
#include <vector>
using namespace std;

template <typename Array>
double average (Array a, long count)  // Array can be a pointer or an iterator
{ 
  double sum = 0.0;
  for (long i = 0; i < count; ++i) 
    sum += a[i];
  return sum/count;                   // let bad things happen when count==0
} 

int main() 
{
  double temperature[] = { 10.5, 20.0, 8.5 }; 

  // second argument is now the count
  cout << "array average = " 
       << average(temperature, (sizeof temperature/ sizeof temperature[0])) << endl;

  vector<int> sunny;
  sunny.push_back(7);  
  sunny.push_back(12);  
  sunny.push_back(15);
  cout << sunny.size() << " months on record" << endl; 
  cout << "average number of sunny days: "; 
  cout << average(sunny.begin(), sunny.end() - sunny.begin()) << endl;
  return 0;
}
