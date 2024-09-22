#include <stdio.h>

void maxSubArr(int* Arr, int len) {
    int product = Arr[0] * Arr[1], index1 = 0, index2 = 1;
    for (int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            if (product < Arr[i] * Arr [j]){
                index1 = i, index2 = j;
                product = Arr[i] * Arr[j];
            }
        }
    }
    printf("%d %d",Arr[index1],Arr[index2]);
}

int main() {
    int arr[] = {1,2,4,-1,-2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    maxSubArr(arr,len);
    return 0;
}