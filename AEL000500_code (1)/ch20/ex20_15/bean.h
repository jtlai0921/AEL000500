// File "Bean.h"
#ifndef BEAN_H
#define BEAN_H

#include <iostream>
#include <string> 
#include "Account.h"
using namespace std;
 
class Bean
{
  public:
    Bean(void) { log << "default_constructor"; }         // Default constructor

    Bean(const Bean& x) { log << "copy_constructor"; }   // Copy constructor

    Bean& operator=(const Bean& x)                       // Assignment operator
    {
      log << ((this == &x) ? "self_assignment" : "assignment"); 
      return *this;
    }

    ~Bean() { log << "destructor"; }                     // Destructor

    bool operator==(const Bean& x) const                 // Equality
    {
      log << "equality_test";
      return true;
    }

    bool operator<(const Bean& x) const                  // Comparison
    {
      log << "operator_less";
      return false;
    }

    friend void clear_bean_log(void) { log.clear(); }

    friend void usage_report(const string& caption = "") 
    {
      if (caption != "") cout << caption << endl;
      log.audit();
      cout << "-end-" << endl;
      log.clear();
    }

  private:
    static Account log;
};
#endif
