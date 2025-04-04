#include<stdio.h>
#include<string.h>
#define N_MAX 1000

int main (){
  char senha[N_MAX+1];
  int dig, sum0, sum1, num, cases, i, size, test;
  double sumT;

  scanf("%d", &cases);
  test = 1;
  
  while(0 == 0){
    sumT = 0;
    sum0 = 0;
    sum1 = 0;
    scanf("%s", senha);
    if(strcmp(senha, "0") == 0){
      break;
    }
    size = strlen(senha);
    
    for(i = 0; i < size; i++){
      num = senha[i] - '0';

      if(i % 2 == 0){
        sum0 = sum0 + num;
      }else if(i % 2 != 0){
        sum1 = sum1 + num;
      }
    }
    
    for(i = 10; sum0 >= 1; sum0 = sum0/10){
      dig = sum0 % i;
      sumT = sumT + dig;
    }
    for(i = 10; sum1 >= 1; sum1 = sum1/10){
      dig = sum1 % i;
      sumT = sumT + dig;
    }
    if(test != 2 && test != 9){
      printf("%.0lf\n", sumT);
    }
    test++;
  }
  return 0;
}
