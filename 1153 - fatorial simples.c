#include <stdio.h>

int fatorial (int num){
  int fat;

  if(num == 1){
    return 1;
  }
  fat = num * fatorial(num-1);
  return fat;
}

int main() {
  int num, fat;

  scanf("%d", &num);
  fat = fatorial(num);
  printf("%d\n", fat);
  
  return 0;
}
