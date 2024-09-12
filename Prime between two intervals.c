#include <stdio.h>

//Calculate prime between two numbers 
int primeCalculate(int x,int y){
  int count = 0;
  for(int i = x; i <= y; i++){
    count = 0;
    for(int j = x; j <= y; j++){
      if (i % j == 0) {
        count +=1;
      }
    }
    if (count == 1){
      printf("%d ",i);
    }
  }
}

int main(){
    primeCalculate(2,7);
    return 0;
}