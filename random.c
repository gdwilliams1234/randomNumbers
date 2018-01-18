#include <stdit.h>

int next(int x, int a, int b, int mod){
  return ((a * x + b) % mod);
}//next(int, int, int, int)


int randomamount(int num, int x, int a, int b, int mod){
  int pre = x;
  for (int i = 0; i < num; i++ ){
    int temp =  next(pre, a, b, mod);
    pre = temp;
    printf("%f", ((float)temp/(float)mod);
  }
}//random(int)


int main(int argc, char** argv ){
  int val;
  int x;
  int a;
  int m;
  printf("how many random number are wanted? : ");
  scanf("%d", &val);
  printf("starting value(x)? : ");
  scanf("%d", &x);
  printf("mult value(a)? : ");
  scanf("%d", &a);
  printf("mod value(m)? : ");
  scanf("%d", &m);

  for(int i = 0; i < val; i = i + 1){
    randomamount(val, x, a, b, mod);
  }
  
}//main
