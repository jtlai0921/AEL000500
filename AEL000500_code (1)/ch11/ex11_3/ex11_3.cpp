// Program 11.3 Making use of a Person
#include <iostream>
using namespace std;
#include "person.h"

int main()
{
  Person her = {
                 { "Letitia", "Gruntfuttock" },     // Initializes Name member
                 {1, 4, 1965                 },     // Initializes Date member
                 {212, 5551234               }      // Initializes Phone member
               };

  Person actress;
  actress = her;                                   // Copy members of her
  her.show();
  Date today = { 15, 3, 1998 };

  cout << endl << "Today is ";
  today.show();
  cout <<  endl; 

  cout << "Today " << actress.name.firstname << " is " 
       << actress.age(today) << " years old."
	   << endl;
  return 0;
}
