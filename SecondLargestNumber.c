#include <stdio.h>=

int secondLargestElement(int arr[],int len){
  int max = arr[0], secondmax;
  for (int i = 1; i < len; i++){
    if (max < arr[i]) {
      secondmax = max;
      max = arr[i];
    }
    else if (secondmax < arr[i] && max != secondmax){
      secondmax = arr[i];
    }
  }
  return secondmax;
}


int main(){
  int arr[] = {1,2,3,3,4,4,5,5,5,6,6,6,6,6,7};
  int len = sizeof(arr)/sizeof(arr[0]);
  printf("%d",secondLargestElement(arr, len));
  return 0;
}