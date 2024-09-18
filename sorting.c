#include <stdio.h>

void sortAscending(int* arr, int len){
  for (int i = 0; i < len - 1; i++){
    for (int j = i + 1; j < len; j++){
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
void sortDescending(int* arr, int len){
  for (int i = 0; i < len - 1; i++){
    for (int j = i + 1; j < len; j++){
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main(){
  int arr[] = {3,2,1,4,6,5,7,10,8};
  int len = sizeof(arr)/sizeof(arr[0]);
  sortDescending(arr,len);
  for (int i = 0; i < len; i++){
    printf("%d ",arr[i]);
  }
  sortAescending(arr,len);
  for (int i = 0; i < len; i++){
    printf("%d ",arr[i]);
  }
  return 0;
}