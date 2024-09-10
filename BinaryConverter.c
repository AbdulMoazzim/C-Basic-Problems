#include <stdio.h>

// decimal to binary converter by making an array
int binaryByArray(int num, int array[]){
  int i = 0;
  while (num != 0) {
    array[i] = num % 2;
    num /= 2;
    i++;
  }
  for (int j = i - 1; j > -1; j--){
    printf("%d",array[j]);
  }
  printf("\n");
 }

// decimal to binary converter by recursion
int binaryByRecursion(int num) {
  if (num > 1){
    binaryByRecursion(num / 2);
  }
  printf("%d",num % 2);
}

int main(){
  int array[100];
  binaryByArray(20, array);
  binaryByRecursion(56);
  return 0;
}