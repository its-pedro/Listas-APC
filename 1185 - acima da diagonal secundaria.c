#include<stdio.h>

int main(){
  int line, column;
  double matriz[12][12], operation;
  char operador;
  
  scanf("%c", &operador);
  operation = 0.0;
  
  for(line = 0; line < 12; line++){
    for(column = 0; column < 12; column++){
      scanf("%lf", &matriz[line][column]);

      if(line + column < 11){
        operation = operation + matriz[line][column];
      }
    }
  }
  if(operador == 'M'){
    operation = operation/66.0;
  }
  printf("%.1lf\n", operation);
  
  return 0;
}
