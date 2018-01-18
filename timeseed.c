#include <time.h>
#include <stdio.h>

//retreives current system time to be used as a seed for the random number generator.
double getTimeSeed(){
  time_t now;
  now = time(NULL);
  return ((double)now);
}//getTimeSeed()
