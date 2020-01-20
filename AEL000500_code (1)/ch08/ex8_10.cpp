// Program 8.10 Returning a pointer
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void showData(const double data[], int count = 1,
                      const string& title = "Data Values", int width = 10, int perLine = 5);
double* largest(double data[], int count);
double* smallest(double data[], int count);

int main()
{
  double samples[] = {
                       11.0,  23.0,  13.0,  4.0,
                       57.0,  36.0, 317.0, 88.0,
                        9.0, 100.0, 121.0, 12.0
                     };

  const int count = sizeof samples / sizeof samples[0];

  showData(samples, count, "Original Values");

  int min = *smallest(samples, count);

  // Shift range of values so smallest is zero
  for(int i = 0; i < count ; i++)
    samples[i] -= min;

  int max = *largest(samples, count);

  // Normalize range to 0 to 1.0
  {
    for(int i = 0; i < count ; i++)
      samples[i] /= max;
  }
  showData(samples, count, "Normalized Values", 12);
  return 0;
}

// Function to find the largest of an array of double values
double* largest(double data[], int count)
{
  int indexMax = 0;
  for(int i = 1; i < count; i++)
    if(data[indexMax] < data[i])
      indexMax = i;

  return &data[indexMax];
}

// Function to find the smallest of an array of double values
double* smallest(double data[], int count)
{
  int indexMin = 0;
  for(int i = 1; i < count; i++)
   if(data[indexMin] > data[i])
     indexMin = i;

  return &data[indexMin];
}

// Function to display an array of double values
void showData(const double data[], int count, const string& title, int width, int perLine)
{
  cout << endl << title;
  for(int i = 0 ; i < count ; i++)
  {
    if(i % perLine == 0)
      cout << endl;
    cout << setw(width) << data[i];
  }
  cout << endl;
}
