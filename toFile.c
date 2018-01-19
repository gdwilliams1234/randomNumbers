#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int toFile(double *data, int arrlen){
  int fo;
  FILE *randData;
  randData = fopen("randomData.txt", "w");
  for (int i = 0; i < arrlen;i++){
    fo = fprintf(randData, "%f\n", data[i]);
    //printf("%f\n", data[i]); testing method for printing of data to consol.
  }
  fclose(randData);
}




//int main(int argc, char** argv){
//  double temp[5] = {1.0, 2.0, 3.0, 4.0, 2.5};
//  toFile(temp, sizeof(temp)/sizeof(double));
  
//}
