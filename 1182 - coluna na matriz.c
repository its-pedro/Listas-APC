#include<stdio.h>

int main(){
  int line, column, column_selected;
  double matriz[12][12], operation;
  char operador;
  
  scanf("%d %c", &column_selected, &operador);
  operation = 0.0;
  
  for(line = 0; line < 12; line++){
    for(column = 0; column < 12; column++){
      scanf("%lf", &matriz[line][column]);

      if(column == column_selected){
        operation = operation + matriz[line][column];
      }
    }
  }
  if(operador == 'M'){
    operation = operation/12.0;
  }
  printf("%.1lf\n", operation);
  
  return 0;
}
