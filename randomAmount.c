#include <stdio.h>
#include "nextRand.c"


int randomamount(int num, int x, int a, int b, int mod){
  int pre = x;
  for (int i = 0; i < num; i++ ){
    int temp =  nextRand(pre, a, b, mod);
    pre = temp;
    printf("%f", ((float)temp/(float)mod));
  }
}//random(int)
