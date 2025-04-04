#include<stdio.h>
#include<stdlib.h>
#define N_MAX 100

int main (){
  int flag[N_MAX+2][N_MAX+2], num[N_MAX+2][N_MAX+2], beginL, beginC, size, soma;
  int i, j, k, l, counter;

  scanf("%d", &size);
  int *anteriorL = (int *) malloc(size*size*sizeof(int));
  int *anteriorC = (int *) malloc(size*size*sizeof(int));
  scanf("%d %d", &beginL, &beginC);
  anteriorC[0] = beginC;
  anteriorL[0] = beginL;
  soma = 0;

  for(i = 0; i < size+2; i++){
    for(j = 0; j < size+2; j++){
      if(0 < i && i < size+1 && 0 < j && j < size+1){
        scanf("%d", &num[i][j]);
        
        if(i == beginL && j == beginC){
          flag[i][j] = 1;
        }else{
          flag[i][j] = 0;
        }
      }else{
        flag[i][j] = 1;
      }
    }
  }
  counter = 0;
  
  while(0 == 0){
    k = anteriorL[counter];
    l = anteriorC[counter];
    
    if(flag[k][l+1] == 0 && num[k][l+1] >= num[k][l]){
      counter++;
      anteriorC[counter] = anteriorC[counter-1] + 1;
      anteriorL[counter] = anteriorL[counter-1];
      flag[k][l+1] = 1;
      
    }else if(flag[k+1][l] == 0 && num[k+1][l] >= num[k][l]){
      counter++;
      anteriorC[counter] = anteriorC[counter-1];
      anteriorL[counter] = anteriorL[counter-1] + 1;
      flag[k+1][l] = 1;
      
    }else if(flag[k][l-1] == 0 && num[k][l-1] >= num[k][l]){
      counter++;
      anteriorC[counter] = anteriorC[counter-1] - 1;
      anteriorL[counter] = anteriorL[counter-1];
      flag[k][l-1] = 1;
      
    }else if(flag[k-1][l] == 0 && num[k-1][l] >= num[k][l]){
      counter++;
      anteriorC[counter] = anteriorC[counter-1];
      anteriorL[counter] = anteriorL[counter-1] - 1;
      flag[k-1][l] = 1;
      
    }else{
      if(counter == 0){
        break;
      }
      counter--;      
    }
  }
  for(i = 1; i <= size; i++){
    for(j = 1; j <= size; j++){
      soma = soma + flag[i][j];
    }
  }
  printf("%d\n", soma);

  free(anteriorC);
  free(anteriorL);
  
  return 0;
}
