#include <stdio.h>

int checkPerfectNumber(int num) {
  int sum = 0;
  for(int i = num - 1; i >= 1; i--){
    if (num % i == 0 ) {
      sum += i;
    }
  }
  if (sum == num) {
    return 1;
  }
  else {
    return 0;
  }
}

int main(){
  printf("%d\n", checkPerfectNumber(8128));
  return 0;
}