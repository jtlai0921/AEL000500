// File data10_1.cpp
#include <string>
using namespace std;

// The next two variables have external linkage
int count;                                 // Will be initialized to 0 by default
float phi = 1.618f;                        // The divine proportion or golden ratio

// Without the extern, the following would not be accessible from another file
extern const double pi = 3.14159265;

extern const string days[] = {
                               "Sunday",   "Monday", "Tuesday", "Wednesday",
                               "Thursday", "Friday", "Saturday"
                             };

