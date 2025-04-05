#include<stdio.h>
#define n_max 70

int main(){
  int num, m_123[n_max][n_max], line, column, line_1, column_1;

  while(scanf("%d", &num) != EOF){
    for(line = 0; line < num; line++){
      for(column = 0; column < num; column++){
  
        if(line + column == num - 1){
          m_123[line][column] = 2;
          
        }else if(line == column){
          m_123[line][column] = 1;
  
        }else{
          m_123[line][column] = 3;
        }
      }
    }
    for(line_1 = 0; line_1 < num; line_1++){
      for(column_1 = 0; column_1 < num; column_1++){
        if(column_1 == (num - 1)){
          printf("%d\n", m_123[line_1][column_1]);
        }else{
          printf("%d", m_123[line_1][column_1]);
        }
      }
    }
  }
  return 0;
}
