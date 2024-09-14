#include <stdio.h>


int checkStrongNumber(int num) {
  int sum = 0, modulo, power, number = num;
  
  while (number != 0){
    modulo = number % 10;
    power = 1;
    for (int i = modulo; i >= 1; i--) {
       power *= i; 
    }
    sum += power;
    number /= 10;
  }
  if (num - sum == 0){
    return 1;
  }else{
    return 0;
  }
}

int main(){;
  printf("%d",checkStrongNumber(145));
  return 0;
}