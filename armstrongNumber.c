#include <stdio.h>

int checkArmstrongNumber(int num) {
  int count = 0, sum = 0, power, number = num;
  while (number != 0) {
    count++;
    number /= 10;
  }
  number = num;
  while (number != 0){
    power = 1;
    for (int i = 1; i <= count; i++) {
       power *= (number % 10); 
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
  printf("%d",checkArmstrongNumber(371));
  return 0;
}