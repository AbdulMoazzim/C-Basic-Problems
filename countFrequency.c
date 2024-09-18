#include <stdio.h>

// void frequencyCount(int arr[], int len){
//   int visited[len];
//   int count;
//   for (int i = 0; i < len; i++) {
//     visited[i] = 0;
//   }
//   for (int i = 0; i < len; i++){
//     count = 0;
//     if (visited[i] == 1){
//       continue;
//     }
//     for (int j = i + 0; j < len; j++){
//       if (arr[i] == arr[j]) {
//         visited[j] = 1;
//         count++;  
//       }
//     }
//     printf("%d : %d\n",arr[i],count);
//   }
// }

int main(){
  int arr[] = {3,2,1,4,6,5,7,10,8,2,3,4,55,6,7,1};
  int len = sizeof(arr)/sizeof(arr[0]);
  frequencyCount(arr, len);
  return 0;
}