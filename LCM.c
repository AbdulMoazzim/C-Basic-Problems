// Online C compiler to run C program online
#include <stdio.h>

int LCM(int a,int b){
    int num1 = a, num2 = b, gcd = 0;
    if (a < b){
        for (int i = a; i >= 1; i--){
            if ((num1 % i == 0) && (num2 % i == 0)){
                gcd = i;
                break;
                
            }
        }
    }
    else if (b < a) {
        for (int i = b; i >= 1; i--){
            if ((num1 % i == 0) && (num2 % i == 0)){
                gcd = i;
                break;
            }
        }
    }
    else if (a == b) {
        gcd = a;
    }
    return (a * b) / gcd;
}

int main() {
    printf("%d",LCM(5,13));
    return 0;
}