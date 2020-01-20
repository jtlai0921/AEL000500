// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

class Account
{
  typedef map<string, int> Ledger;

  public:
    Account(void) {}
    void clear(void) { L.clear(); }

    Account& operator<<(const string& item) 
    {
      L[item]++;
      return *this;
    }

    void audit(void) const 
    {
      Ledger::const_iterator iter;
      for(iter = L.begin(); iter != L.end(); ++iter)
        cout << setw(7) << iter->second << " " << iter->first << endl;
    }

  private:
    Ledger L; 
};
#endif
