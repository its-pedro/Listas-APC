#include<stdio.h>

int main(){
  int cod, qntd;
  float total;
  
  scanf("%d %d", &cod, &qntd);

  if(cod == 1){
    total = qntd * 4.0;
    printf("Total: R$ %.2f\n", total);
    
  }if(cod == 2){
    total = qntd * 4.5;
    printf("Total: R$ %.2f\n", total);
    
  }if(cod == 3){
    total = qntd * 5.0;
    printf("Total: R$ %.2f\n", total);
    
  }if(cod == 4){
    total = qntd * 2.0;
    printf("Total: R$ %.2f\n", total);
    
  }if(cod == 5){
    total = qntd * 1.5;
    printf("Total: R$ %.2f\n", total);
    
  }
  return 0;
}
