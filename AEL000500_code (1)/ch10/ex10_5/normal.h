// normal.h
// Normalize an aray of values to the range 0 to 1
#include "tempcomp.h"

namespace compare
{
  template<class Torig, class Tnorm> void normalize(Torig* data,
                                                    Tnorm* newData, int size)
  {
    Torig minValue = min(data, size);            // Get minimum element
    
    // Shift all elements so minimum is zero
    for(int i = 0 ; i < size ; i++)
      newData[i] = static_cast<Tnorm>(data[i] - minValue);

    Tnorm maxValue = max(newData, size);         // Get max of new set 

    // Scale elements so maximum is 1
    for(int i = 0 ; i < size ; i++)
      newData[i] /= maxValue;
  }
}



