// Person.h Definitions for Person and related structures
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

// Name structure definition
struct Name
{
  char firstname[80];
  char surname[80];

  // Display the name
  void show()
  {
    cout << firstname << " " << surname;
  }
};

// Date structure definition
struct Date
{
  int day;
  int month;
  int year;

  // Display the date
  void show()
  {
    cout << month << "/" << day << "/" << year;
  }
};

// Phone structure definition
struct Phone
{
  int areacode;
  int number;

  // Display a phone number
  void show()
  {
    cout << areacode << " " << number;
  }
};

// Person structure definition
struct Person
{
  Name name;
  Date birthdate;
  Phone number;

  // Display a person
  void show()
  {
    cout << endl;
    name.show();
    cout << endl; 
	cout << "Born: ";
    birthdate.show();
    cout << endl;
	cout << "Telephone: ";
    number.show(); 
	cout << endl;
  }

  // Calculate the age up to a given date
  int age(Date& date)
  {
    if(date.year <= birthdate.year)
      return 0;

    int years = date.year - birthdate.year;
    if((date.month>birthdate.month) || 
                  (date.month == birthdate.month && date.day>= birthdate.day))
    return years;
      else
    return --years;
  }
};

#endif

