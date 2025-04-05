#include <stdio.h>
#include <stdlib.h>
#define N_MAX 100

int main () {
  int lin_pokemon, col_pokemon, lin_trainer, col_trainer, i, j, city[N_MAX + 1][N_MAX + 1], line, colunm, distance;

  while(scanf("%d %d", &line, &colunm) != EOF){
    for(i = 0; i < line; i++){
      for(j = 0; j < colunm; j++){
        scanf("%d", &city[i][j]);

        if(city[i][j] == 1){
          lin_pokemon = i;
          col_pokemon = j;
          
        }else if(city[i][j] == 2){
          lin_trainer = i;
          col_trainer = j;
          
        }
      }
    }
    distance = abs(lin_pokemon - lin_trainer) + abs(col_pokemon - col_trainer);
    
    printf("%d\n", distance);
  }
  return 0;
}
