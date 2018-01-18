#include <stdio.h>
#include <unistd.h>
#include "timeseed.c"
#include "randomAmount.c"


#define Nim 5

int printedNumbersSelector(){
  int val, x, a, m, b;
  printf("how many random number are wanted? : ");
  scanf("%d", &val);
  printf("starting value(x)? : ");
  scanf("%d", &x);
  printf("mult value(a)? : ");
  scanf("%d", &a);
  printf("mod value(m)? : ");
  scanf("%d", &m);
  printf("ad value(b)? : ");
  scanf("%d", &b);
  randomamount(val, x, a, b, m);
}

double Numbers [Nim];

double randomlist(double T, int a, int b, int mod, int length){
  double hold;
  for (int i = 0; i < length; i++){
    hold = nextRand(hold, a, b, mod);
    Numbers[i] = (double)hold/(double)mod;
  }
  return hold;
}

int printnum(){
  for (int i = 0; i < sizeof(Numbers); i++){
    printf("%f", Numbers[i]);
    printf("\n");
  }
}

//writing to a file
//fd = open( "rng.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU );

//count = write(fd, data, (size_t) sizeof(data) );

//code = close(fd);
//file



int main(int argc, char** argv ){
  double seed = timeseed();
  int tempseed = (int)seed%1000000;
  printf("%d", tempseed);
  printf("\n");
  printf("%f\n", seed);
  randomlist(tempseed, 3, 13, 101, 100);
  printnum();
  
}//main
