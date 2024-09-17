#include <stdio.h>
#include <string.h>


int stringPalindrome(char st[], int len){
  for (int i = 0; i <= len/2; i++){
    if (st[i] == st[len - 1 - i]){
      continue;
    }
    else {
      return 0;
    }
  }
  return 1;
}

int main(){
  char st[] = "hello";
  printf("%d",stringPalindrome(st, strlen(st)));
  return 0;
}