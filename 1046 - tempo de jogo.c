#include<stdio.h>

int main(){
  int beg, end, time;

  scanf("%d %d", &beg, &end);

  if(end <= beg){
    end = end + 24;
    time = end - beg;
    printf("O JOGO DUROU %d HORA(S)\n", time);
    
  }else{
    time = end - beg;
    printf("O JOGO DUROU %d HORA(S)\n", time);
    
  }

  return 0;
}
