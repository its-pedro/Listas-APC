#include<stdio.h>
#define N_MAX 102


int main (){
  int size, i , j, matriz[N_MAX][N_MAX];

  while(0 == 0){
    scanf("%d", &size);
    if(size == 0){
      break;
    }

    for(i = 1; i <= size; i++){
      for(j = 1; j <= size; j++){
        if(i <= j){
          matriz[i][j] = j - i + 1;
        }else{
          matriz[i][j] = matriz[j][i];
        }
        if(j != size)
          printf("%3d ", matriz[i][j]);
        else
          printf("%3d\n", matriz[i][j]);

      }
    }
    printf("\n");
  }
  return 0;
}
