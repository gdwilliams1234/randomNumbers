#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/timeb.h>

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

double randomlist(time_t T, int a, int b, int mod, int length){
  int hold = (int)T;
  for (int i = 0; i < length; i++){
    hold = randnext(hold, a, b, mod);
    Numbers[i] = hold;
  }
  return hold;
}

int printnum(){
  for (int i = 0; i < sizeof(Numbers); i++){
    printf("%f", Numbers[i]);
  }
}

//writing to a file
//fd = open( "rng.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU );

//count = write(fd, data, (size_t) sizeof(data) );

//code = close(fd);
//file



int main(int argc, char** argv ){
  double seed = getTimeSeed();
  printf("WHYYY : ");
  printf("%f", (double)seed);
  printf(" WWWWWW \n");
  printnum();
}//main
