#include <stdio.h>

int findGCD(int a, int b){
  if (a <= b){
    for(int i = a; i >= 1; i--){
      if (a % i == 0 && b % i == 0) {
        return i;
      }
    }
  } else {
    for(int j = b; j >= 1; j--){
      if (a % j == 0 && b % j == 0) {
        return j;
      }
    }
  }
}

int main(){
  printf("%d\n", findGCD(12,18));
  return 0;
}