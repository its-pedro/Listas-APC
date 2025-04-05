#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define L_MAX 22000

void ordemAlfabetica (char compras[1000][21], int qntd){
  int i, j;
  char aux[21];

  for(i = 0; i < qntd-1; i++){
    for(j = i+1; j < qntd; j++){
      if(strcmp(compras[i], compras[j]) > 0){
        strcpy(aux, compras[i]);
        strcpy(compras[i], compras[j]);
        strcpy(compras[j], aux);
      }
    }
  }
}

void imprimeOrdem(char compras[1000][21], int qntd){
  int i;
  for(i = 0; i < qntd-1; i++){
    printf("%s " , compras[i]);
  }
  printf("%s\n", compras[qntd-1]);
}

void findRepeated(char **itens, int qntd){
  int i, j, k, equal, tamanho;
  char lista[1000][21];

  k = 0;
  strcpy(lista[k], itens[0]);
  k++;
  
  for(i = 1; i < qntd; i++){
    equal = 1;
    for(j = 0; j < k; j++){
      if(strcmp(lista[j], itens[i]) == 0){
        equal = 0;
      }
    }
    if(equal == 1){
      strcpy(lista[k], itens[i]);
      k++;
    }
  }
  tamanho = k;
  ordemAlfabetica(lista, tamanho);
  imprimeOrdem(lista, tamanho);
}

int main (){
  int i, j, k, size, cases, tamanho;

  scanf("%d", &cases);
  getchar();

  while(cases != 0){
    char lista[L_MAX+1];
    
    scanf("%[^\n]s", lista);
    getchar();
    size = strlen(lista);

    for(i = 0, j = 0; i < size; i++){
      if(lista[i] == ' '){
        j++;
      }
    }

    tamanho = j+1;
    char **item = (char**) malloc(tamanho * sizeof(char*));
    for(int l = 0; l < tamanho; l++){
      item[l] = (char *)malloc(21 * sizeof(char));
    }
       
    for(i = 0, j = 0, k = 0; i < size && j < tamanho; i++){
      if(lista[i] == ' '){
        item[j][k] = '\0';
        j++;
        k = 0;
      }else{
        item[j][k] = lista[i];
        k++;
      }
    }
    item[j][k] = '\0';
    findRepeated(item, tamanho);

    for(int l = 0; l < tamanho; l++){
      free(item[l]);
    }
    free(item);

    cases--;
  }
  return 0;
}
