
#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("Myfile.txt","r");
    if (fgetc(fptr) == EOF) {
      printf("The File is Empty\n");
    } else {
      printf("The file is not empty\n");
    }
    return 0;
}