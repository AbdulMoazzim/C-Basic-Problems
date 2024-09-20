#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("Myfile.txt","r");
    int count = 0;
    char alpha = fgetc(fptr);
    do {
      alpha = fgetc(fptr);
      if (alpha == ' ' || alpha == '\n' || alpha == EOF) {
        count++;
      }
    } while (alpha != EOF);
    fclose(fptr);
    printf("The no of words is %d", count);
    return 0;
}