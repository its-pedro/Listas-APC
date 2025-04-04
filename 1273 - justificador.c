#include<stdio.h>
#include<string.h>
#define N_MAX 50

int main(){
  int cases, size, max, teste;
  int i, j, k;
  char word[N_MAX][N_MAX];
  teste = 1;
  
  while(0 == 0){
    scanf("%d", &cases);
    if(cases == 0){
      break;
    }
    if(teste != 1){
      printf("\n");
    }else{
      teste = 0;
    }
    max= 0;
    for(i = 0; i < cases; i++){
      scanf("%s", word[i]);

      size = strlen(word[i]);
      if(size > max){
        max = size;
      }
    }
    for(i = 0; i < cases; i++){
      size = strlen(word[i]);

      for(j = max, k = size; j >= max - size; j--, k--){
        word[i][j] = word[i][k];
      }
      for(k = max - size - 1; k >= 0; k--){
        word[i][k] = ' ';
      }
    }
    for(i = 0; i < cases; i++){     
      printf("%s\n", word[i]);
    }
  }
  return 0;
}
