#include <stdio.h>

int main() {
  int arr[] = {1,2,3,4,5,7,8};
  int len = sizeof(arr)/sizeof(arr[0]);
  if (len% 2 != 0){
    printf("%d",arr[len/2]);
  }
  else{
    printf("%d %d",arr[len/2 - 1],arr[len/2]);
  }
  return 0;
}