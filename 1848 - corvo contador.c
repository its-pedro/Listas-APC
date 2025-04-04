#include<stdio.h>
#include<string.h>

int main(){
  int soma, counter;
  char str[20];

  for(counter = 3; counter > 0; counter--){
    soma = 0;
    while(0 == 0){
      scanf("%[^\n]s", str);
      getchar();
      
      if(str[2] == '*'){
        soma++;
      }
      if(str[1] == '*'){
        soma+=2;
      }
      if(str[0] == '*'){
        soma+=4;
        
      }
      if(strcmp(str, "caw caw") == 0){
        printf("%d\n", soma);
        break;
      }
    }
 }
  return 0;
}
