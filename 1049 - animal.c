#include <stdio.h>
#include<string.h>

int main() {
  char vertebra[25], filo[25], alimentacao[25]; 

  scanf("%s", vertebra);
  scanf("%s", filo);
  scanf("%s", alimentacao);

  if(strcmp("vertebrado", vertebra) == 0){
    if(strcmp("ave", filo) == 0){
      if(strcmp("carnivoro", alimentacao) == 0){
        printf("aguia\n");
      }else if(strcmp("onivoro", alimentacao) == 0){
        printf("pomba\n");
      }
    }else if(strcmp("mamifero", filo) == 0){
      if(strcmp("herbivoro", alimentacao) == 0){
        printf("vaca\n");
      }else if(strcmp("onivoro", alimentacao) == 0){
        printf("homem\n");
      }
    }    
  }else if(strcmp("invertebrado", vertebra) == 0){
    if(strcmp("inseto", filo) == 0){
      if(strcmp("hematofago", alimentacao) == 0){
        printf("pulga\n");
      }else if(strcmp("herbivoro", alimentacao) == 0){
        printf("lagarta\n");
      }
    }else if(strcmp("anelideo", filo) == 0){
      if(strcmp("hematofago", alimentacao) == 0){
        printf("sanguessuga\n");
      }else if(strcmp("onivoro", alimentacao) == 0){
        printf("minhoca\n");
      }
    } 
  }
  return 0;
}
