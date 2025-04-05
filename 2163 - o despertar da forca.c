#include<stdio.h>
#define N_MAX 1000


int main (){
  int line, colunm, terrain[N_MAX+2][N_MAX+2], i, j, outLine, outColunm, radiation, k, l;

  scanf("%d %d", &line, &colunm);
  outLine = 0;
  outColunm = 0;

  for(i = 0; i < line+2; i++){
    for(j = 0; j < colunm+2; j++){
      terrain[i][j] = 1;
    }
  }
  
  for(i = 1; i <= line; i++){
    for(j = 1; j <= colunm; j++){
      scanf("%d", &terrain[i][j]);
      
    }
  }
  
  for(i = 1; i <= line; i++){
    for(j = 1; j <= colunm; j++){
      if(terrain[i][j] == 42){
        radiation = 0;
        for(k = i-1; k <= i+1; k++){
          for(l = j-1; l <= j+1; l++){
            if(terrain[k][l] == 7){
              radiation++;
            }
          }
        }
        if(radiation == 8){
          outLine = i;
          outColunm = j;
        }
      }
    }
  }
  printf("%d %d\n", outLine, outColunm);

  return 0;
}
