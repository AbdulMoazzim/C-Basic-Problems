#include <stdio.h>

void removeDuplicates(int* arr,int len) {
    int count = 0, integer = 0, i = 0;
    for (int i = 0; i < len - 1; i++){
        for (int j = i + 1; j < len; j++){
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = 0;
            }
        }
    }
    int newArr[len - count];
    while (integer < 12){
        if (arr[integer] == 0){
            integer++;
            continue;
        }
        else {
            newArr[i] = arr[integer];
            integer++;
            i++;
        }
    }
    for (int i = 0; i < len - count; i++){
        printf("%d ",newArr[i]);
    }
}

int main() {
    int Arr[12] = {1,2,3,4,4,5,6,6,7,8,9,9};
    removeDuplicates(Arr,12);
    return 0;
}