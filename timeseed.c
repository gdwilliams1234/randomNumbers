#include <time.h>
#include <stdio.h>
//retreives current system time to be used as a seed for the random number generator.
double timeseed(){
  time_t now;
  now = time(NULL);
  return ((double)now);
}//getTimeSeed()
