#include <stdio.h>
#include <string.h>


int checkAnagrams(char* st1, char* st2){
  if (strlen(st1) != strlen(st2)) {
    return 0;
  }
  int count,len = strlen(st1);
  for (int i = 0; i < len; i++){
    count = 0;
    for (int j = 0; j < len; j++){
      if (st1[i] == st2[j]){
        count = 1;
        break;
      }
    }
    if (count != 1){
      return 0;
    }
  }
  return 1;
}

int main(){
  printf("%d",checkAnagrams("hello", "world"));
  return 0;
}