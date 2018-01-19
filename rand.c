#include <stdio.h>
#include <unistd.h>

#include "timeseed.c"
#include "randomAmount.c"
#include "quadrents.c"

#include "toFile.c"

//basic random number, prints to consol and asks for user input on run from command line.
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
//makes a random list of numbers betweem zero and 1, needs a list, a inital value, a mult, add, mod, and the length of the given list.
int randomlist(double *list, double T, int a, int b, int mod, int length){
  double hold;
  for (int i = 0; i < length; i++){
    hold = nextRand(hold, a, b, mod);
    list[i] = (double)hold/(double)mod;
  }
}
// uses the same inputs as random list but produces numbers between -1 and 1.
int randomlistp(double *list, double T, int a, int b, int mod, int length){
  double hold;
  for (int i = 0; i < length; i++){
    hold = nextRand(hold, a, b, mod);
    list[i] = 2*((double)hold/(double)mod)-1;
  }
}

//prints all the numbers in a given list of len length.
int printnum(double *n, int len){
  for (int i = 0; i < len; i++){
    printf("%f", n[i]);
    printf("\n");
  }
}

//averages the total of a list of numbers of len length.
double average(double *nums, int len){
  double total = 0;
  for (int i =0; i < len;i++){
    total = nums[i] + total;
  }
  return total/len;
}



//main testing method.
int main(int argc, char** argv ){
  double Numbers[100];
  double seed = timeseed();
  int tempseed = (int)seed%1000000;
  randomlist(Numbers, tempseed, 3, 13, 101, 100);
  printnum(Numbers, 100);
  toFile(Numbers, sizeof(Numbers)/sizeof(double));

  double x[100], y[100];
  randomlistp(x, (int)timeseed()%10000, 3, 13, 101, 100);
  randomlistp(y, ((int)timeseed()%10000)/325, 9, 27, 101, 100);
  double tx = average(x, 100);
  double ty = average(y, 100);
  
  int q1 = quadrent1(x, y, 100); 
  int q2 = quadrent2(x, y, 100);
  int q3 = quadrent3(x, y, 100);
  int q4 = quadrent4(x, y, 100);
  printnum(x, 100);
  printf("q1 number %i\n", q1);
  printf("q2 number %i\n", q2);
  printf("q3 number %i\n", q3);
  printf("q4 nubmer %i\n", q4);
  
}//main
