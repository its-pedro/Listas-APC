#include <stdio.h>

int trocaFigurinha(int R, int V){
  if(V == 0){
    return R;
  }
  return trocaFigurinha(V, R % V); 
}

int main (){
  int cases, ricardo, vicente, max;
  scanf("%d", &cases);
  
  while(cases > 0){
    scanf("%d %d", &ricardo, &vicente);
    max = trocaFigurinha(ricardo, vicente);
    printf("%d\n", max);
    cases--;
  
  }
  return 0;
}
