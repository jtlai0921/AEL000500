// BoxPtr.cpp
#include "List.h"
#include "BoxPtr.h"
#include <iostream>
using namespace std;

// Constructor
BoxPtr::BoxPtr(TruckLoad& load):rLoad(load)
{
  pBox = rLoad.getFirstBox();
}

// * overload
Box& BoxPtr::operator*() const
{
  if(pBox)
    return *pBox;
  else
  {
    cout << endl << "Dereferencing null BoxPtr";
    exit(1);
  }
}

// -> overload
Box* BoxPtr::operator->() const
{
  return pBox;
}

// Prefix increment
Box* BoxPtr::operator++()
{
  return pBox = rLoad.getNextBox();
}

// Postfix increment
const Box* BoxPtr::operator++(int)
{
  Box* pTemp = pBox;
  pBox = rLoad.getNextBox();
  return pTemp;
}

// Conversion to bool
BoxPtr::operator bool()
{
  return pBox != 0;
}
