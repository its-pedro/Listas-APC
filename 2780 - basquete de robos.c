#include<stdio.h>

int main(){
  int dist;

  scanf("%d", &dist);

  if(dist <= 800){
    printf("1\n");
    
  }if(dist > 800 && dist <= 1400){
    printf("2\n");
    
  }if(dist > 1400){
    printf("3\n");
    
  } 
  return 0;
}
