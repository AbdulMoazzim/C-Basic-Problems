
#include <stdio.h>

void binary(int num) {
    if (num / 2 == 1){
        printf("%d%d",num/2,num%2);
        return;
    }
    binary(num/2);
    printf("%d",num%2);
}

int main() {
    binary(15);
    return 0;
}