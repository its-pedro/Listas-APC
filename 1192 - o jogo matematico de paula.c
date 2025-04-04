#include<stdio.h>

int main(){
  int counter, num1, num2;
  char code;

  scanf("%d", &counter);
  for(; counter > 0; counter--){
    scanf("%d%c%d", &num1, &code, &num2);

    if(num1 == num2){
      printf("%d\n", num1 * num2);
      
    }else if(65 <= code && code <= 90){
      printf("%d\n", num2 - num1);
      
    }else if(97 <= code && code <= 122){
      printf("%d\n", num1 + num2);
      
    }
  }
  return 0;
}
