#include <stdio.h>

int powerCalculate(int num,int* integer, int* power){
  int number;
  for (int i = *integer; i < num + 1; i++) {
    number = num;
    *power = 0;
    while (number != 0) {
      if (number % i == 0){
        *power += 1;
        number /= i; 
        if (number == 1){
          *integer = i;
          return 1;
        }
      }
      else {
        break;
      }
    }
  }
}

int main(){
  int integer = 8;
  int power = 0;
  powerCalculate(256, &integer, &power);
  printf("%d^%d",integer, power);
  return 0;
}