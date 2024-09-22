#include <stdio.h>

int LCM(int a, int b) {
    int num1 = a, num2 = b, gcd;
    if (a < b) {
        for (int i = a; i >= 1; i--){
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
                break;
            }
        }
    }
    else if (b < a) {
        for (int i = b; i >= 1; i--){
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
                break;
            }
        }
    }
    if (a == b) {
        gcd = a;
    }
    return (a*b)/gcd;
}

int main() {
    int numA = 6, numB = 36;
    int HCF = (numA * numB) / LCM(numA, numB);
    printf("%d",HCF);
    return 0;
}