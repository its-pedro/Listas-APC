#include <stdio.h>

int granizoSequel(int num, int max){
  if(num % 2 == 0){
    num = num/2;
    if(num > max){
      max = num;
    }
    if(num == 1){
      return max;
    }
    granizoSequel(num, max);
  }else{
    num = (3*num) + 1;
    if(num > max){
      max = num;
    }
    if(num == 1){
      return max;
    }
    granizoSequel(num, max);
  }
}

int main(){
  int num, outPut, max;

  while(0 == 0){
    scanf("%d", &num);
    if(num == 0){
      break;
    }
    max = num;
    if(num != 1){
      outPut = granizoSequel(num, max); 
    }else{
      outPut = 1;
    }
    printf("%d\n", outPut);
  }
  return 0;
}
