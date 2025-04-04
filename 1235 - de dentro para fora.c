#include<stdio.h>
#include<string.h>
#define N_MAX 100

int main(){
  int cases, size, i, begin;
  char str[N_MAX+1];

  scanf("%d", &cases);
  getchar();

  while(cases > 0){
    scanf("%[^\n]s", str);
    getchar();

    size = strlen(str);
    begin = size/2;
    
    for(i = begin-1; i >= 0; i--){
      printf("%c", str[i]);
    }
    for(i = size-1; i >= begin; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    cases--;
  }
  return 0;
}
