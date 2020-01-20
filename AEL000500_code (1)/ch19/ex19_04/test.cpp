/*

Ex 2.2 Write a program that will compute the area of a circle. The program should 
prompt for the radius of the circle, calculate the area using the formula 
area = pi * radius * radius, and then display the result. 

Modify Ex 2.2, so that the user can control the precision of the output. 


When you've completed this 
program, experiment with the output manipulators fixed, scientific and  setprecision(), 
and see how these affect youer output. 


  */







#include <iostream>
#include <iomanip>
using namespace std;

// Initialize constant variables
const float pi = 3.142f;

int main()
{
  float radius = 0;
  float areaOfCircle = 0;
  int sigFigs = 5;

  cout << "This program will compute the area of a circle." << endl
       << "We assume that the value of pi is " << pi << "." << endl;

  cout << "Please enter the radius: ";
  cin >> radius;

  cout << "Please enter the desired precision of the output (significant figures): ";
  cin >> sigFigs;

  areaOfCircle = pi * radius * radius;

  cout << endl 
       << "The area of the circle is approximately equal to " 
       << setprecision(sigFigs)
	   << areaOfCircle << " square units." << endl;

  return 0;
}
