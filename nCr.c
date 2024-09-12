#include <stdio.h>

int nCr(int n, int r) {
  int numerator = 1,denominator = 1;
  if(n < r){
    return 0;
  }
  else {
    for (int i = 1; i <= n; i++){
      numerator *= i;
    }  
    for (int j = 1; j <= (n-r); j++){
      denominator *= j;
    }
    for (int k = 1; k <= r; k++){
      denominator *= k;
    }
  }
  return numerator/denominator;
}

int main(){
  printf("%d\n",nCr(10, 5));
  return 0;
}