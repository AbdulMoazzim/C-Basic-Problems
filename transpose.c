#include <stdio.h>

void Transpose(){
  int arr[2][2] = {{1,3},{2,4}};
  int Transpose[2][2];
  for (int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      Transpose[j][i] = arr[i][j];
    }
  }
  for (int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      printf("%d ",Transpose[i][j]);
    }
    printf("\n");
  }
  
}

int main(){
  Transpose();
  return 0;
}