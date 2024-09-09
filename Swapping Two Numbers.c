#include <stdio.h>

//swapping Two Numbers
void swap(int* a, int* b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}
int main(){
    int a = 5; 
    int b = 6;
    printf("%d %d\n", swap(&a,&b));
    return 0;
}