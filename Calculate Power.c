#include <stdio.h>

int powerCalculate(int num,int* integer, int* power){
  if (num % num != 0) {
    return 0;
  } 
  for (int i = *integer; i < num + 1; i++) {
    *power = 0;
    while (num > 1) {
      if (num % i == 0){
        *power += 1;
        num /= i; 
        if (num == 1){
          return 1;
        }
      }
      else {
        break;
      }
    }
  }
  return *power;
}

int main(){
  int integer = 4;
  int power = 0;
  powerCalculate(511, &integer, &power);
  printf("%d^%d",integer, power);
  return 0;
}