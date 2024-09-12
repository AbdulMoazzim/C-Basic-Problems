#include <stdio.h>


//checking prime number by recursion
int primeByRecursion(int count ,int num, int increment){
  if (num % increment == 0){
    count += 1;
  }
  if (num == increment){
    if (count == 2){
      return num;
    }
    else {
      return -1;
    }
  }
  return (primeByRecursion(count, num,increment + 1));
  
}

int main(){
  int count = 0;
  printf("%d\n",primeByRecursion(0, 15, 1));
  return 0;
}