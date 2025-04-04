#include<stdio.h>

int main(){
  int int1, int2, int3;

  scanf("%d %d %d", &int1, &int2, &int3);

  if(int1 > int2 && int1 > int3){
    if(int2 > int3){
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", int3, int2, int1, int1, int2, int3);
      
    }else{
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", int2, int3, int1, int1, int2, int3);
      
    }
  }if(int2 > int1 && int2 > int3){
    if(int1 > int3){
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", int3, int1, int2, int1, int2, int3);

    }else{
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", int1, int3, int2, int1, int2, int3);

    }
  }if(int3 > int1 && int3 > int2){
    if(int1 > int2){
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", int2, int1, int3, int1, int2, int3);

    }else{
      printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", int1, int2, int3, int1, int2, int3);

    }
  }
  return 0;
}
