// Program 20.3 Computing the average function with template iterators
#include <iostream>
#include <vector> 
using namespace std;

template <typename Iter> 
double average (Iter a, Iter end)     // improves average(double*a,double*end)
{ 
  double sum = 0.0;
  int count = 0;  
  for( ; a != end ; ++count)
    sum += *a++;
  return sum/count;                   // lets bad things happen if count==0
} 

int main() 
{
  double temperature[] = { 10.5, 20.0, 8.5 }; 
  cout << "array average = " 
       << average(temperature, temperature + (sizeof temperature/sizeof temperature[0])) 
       << endl;

  vector<int> sunny;
  sunny.push_back(7);  
  sunny.push_back(12);  
  sunny.push_back(15);
  cout << sunny.size() << " months on record" << endl; 
  cout << "average number of sunny days: "; 
  cout << average(sunny.begin(), sunny.end()) << endl; 

  return 0;
}
