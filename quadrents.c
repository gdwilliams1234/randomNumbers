//made to find the count of the number of points inside of each quadrent.
double quadrent1(double *nx, double *ny, int len){
  int numb = 0;
  for (int i = 0; i < len;i++){
    if(nx[i] < 0 && ny[i] < 0){
      numb++;
    }else{
      //blank
    }
  }
  return numb;
}


double quadrent2(double *nx, double *ny, int len){
  int numb = 0;
  for (int i = 0; i < len;i++){
    if(nx[i] < 0 && ny[i] > 0){
      numb++;
    }else{
      //blank
    }
  }
  return numb;
}


double quadrent3(double *nx, double *ny, int len){
  int numb = 0;
  for (int i = 0; i < len;i++){
    if(nx[i] > 0 && ny[i] < 0){
      numb++;
    }else{
      //blank
    }
  }
  return numb;
}



double quadrent4(double *nx, double *ny, int len){
  int numb = 0;
  for (int i = 0; i < len;i++){
    if(nx[i] > 0 && ny[i] > 0){
      numb++;
    }else{
      //blank
    }
  }
  return numb;
}
