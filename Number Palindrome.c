#include <stdio.h>

int checking_palindrome(int num){
  int number = num;
  int reverse = 0;
  while (num != 0){
    reverse = reverse * 10 + num % 10;
    num /= 10;
  }
  if((number - reverse) == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  printf("%d",checking_palindrome(555));
  return 0;
}