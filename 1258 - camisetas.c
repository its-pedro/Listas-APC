#include <stdio.h>
#include <string.h>

struct Camisetas{
  char nome[51];
  char cor[10];
  char size;
};

typedef struct Camisetas Shirt;

//troca de um objeto struct
Shirt copiaStruct(Shirt molde, Shirt copia){
  copia.size = molde.size;
  strcpy(copia.nome, molde.nome);
  strcpy(copia.cor, molde.cor);

  return copia;
}

//Organiza cor
Shirt *organizaCor(Shirt *camisa, int cases){
  int i, j;
  Shirt aux;

  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(strcmp(camisa[j].cor, "branco") == 0){
        aux = copiaStruct(camisa[i], aux);
        camisa[i] = copiaStruct(camisa[j], camisa[i]);
        camisa[j] = copiaStruct(aux, camisa[j]);
      }
    }
  }
  return camisa;
}

//Organiza tamanho
Shirt *organizaTamanho(Shirt *camisa, int cases, int white){
  int i, j, tot;
  Shirt aux;
  
  for(i = 0, tot = 0; i < white-1; i++){
    for(j = i+1; j < white; j++){
      if(camisa[i].size < camisa[j].size){
        aux = copiaStruct(camisa[i], aux);
        camisa[i] = copiaStruct(camisa[j], camisa[i]);
        camisa[j] = copiaStruct(aux, camisa[j]);
      }
    }
  }
  for(i = white, tot = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(camisa[i].size < camisa[j].size){
        aux = copiaStruct(camisa[i], aux);
        camisa[i] = copiaStruct(camisa[j], camisa[i]);
        camisa[j] = copiaStruct(aux, camisa[j]);
      }
    }
  }
  return camisa;
}

//Organiza ordem alfabética
Shirt *ordemAlfabetica(Shirt *camisa, int cases){
  int i, j;
  Shirt aux;

  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(strcmp(camisa[i].cor, camisa[j].cor) == 0 && camisa[i].size == camisa[j].size){
        if(strcmp(camisa[i].nome, camisa[j].nome) >= 0){
          aux = copiaStruct(camisa[i], aux);
          camisa[i] = copiaStruct(camisa[j], camisa[i]);
          camisa[j] = copiaStruct(aux, camisa[j]);
        }
      }
    }
  }
  return camisa;
}

//imprimir a ordem correta
void imprimeOrdem(Shirt *camisa, int cases){
  for(int i = 0; i < cases; i++){
    printf("%s %c %s\n", camisa[i].cor, camisa[i].size, camisa[i].nome);
  }
}

int main(){
  int cases, i, beggining = 1, totWhite, totRed;
  Shirt people[60], *outPut;

  while(0 == 0){
    scanf("%d", &cases);
    getchar();
    
    if(cases == 0){
      break;
    }
    if(beggining == 0){
      printf("\n");
    }
    beggining = 0;
    
    for(i = 0, totWhite = 0, totRed = 0; i < cases; i++){
      scanf("%[^\n]s", people[i].nome);
      getchar();
      scanf("%s", people[i].cor);
      getchar();
      if(strcmp(people[i].cor, "branco") == 0){
        totWhite++;
      }
      scanf("%c", &people[i].size);
      getchar();
    }

    outPut = organizaCor(people, cases);
    outPut = organizaTamanho(outPut, cases, totWhite);
    outPut = ordemAlfabetica(people, cases);
    imprimeOrdem(outPut, cases);
  }
  return 0;
}
