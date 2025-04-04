#include <stdio.h>

int main(){
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  if(A == B || B == C || A == C){
    printf("S\n");

  }else if(A == B + C || B == C + A || C == A + B){
    printf("S\n");

  }else{
    printf("N\n");
   
  }
  return 0;
}
