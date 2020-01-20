// Program 5.1 Using a while loop to sum integers
#include <iostream>
using namespace std;

int main()
{
  int i = 1;                         // Stores the integers to be added
  int sum = 0;                       // Stores the sum of integers

  while(i <= 10)
  {
    cout << i << endl;               // Output current value of i
    sum += i++;
  }

  cout << "Sum is " << sum << endl;  // Output final sum
  return 0;
}
