#include <stdio.h>
#include <string.h>

struct medalBoard{
  char nome[31];
  int ouro;
  int prata;
  int bronze;
};

typedef struct medalBoard medalha;

void imprimeOrdem (medalha *pais, int cases){
  for(int i = 0; i < cases; i++){
    printf("%s %d %d %d\n", pais[i].nome, pais[i].ouro, pais[i].prata, pais[i].bronze);
  }
}

medalha copiaStruct (medalha copia, medalha molde){
  copia.ouro = molde.ouro;
  copia.prata = molde.prata;
  copia.bronze = molde.bronze;
  strcpy(copia.nome, molde.nome);

  return copia;
}

medalha *ordemOuro(medalha *pais, int cases){
  int i, j; 
  medalha aux;
  
  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(pais[i].ouro < pais[j].ouro){
        aux = copiaStruct(aux, pais[i]);
        pais[i] = copiaStruct(pais[i], pais[j]);
        pais[j] = copiaStruct(pais[j], aux);
      }
    }
  }
  return pais;
} 

medalha *ordemPrata(medalha *pais, int cases){
  int i, j; 
  medalha aux;

  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(pais[i].ouro == pais[j].ouro && pais[i].prata < pais[j].prata){
        aux = copiaStruct(aux, pais[i]);
        pais[i] = copiaStruct(pais[i], pais[j]);
        pais[j] = copiaStruct(pais[j], aux);
      }
    }
  }
  return pais;
}

medalha *ordemBronze(medalha *pais, int cases){
  int i, j; 
  medalha aux;

  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(pais[i].ouro == pais[j].ouro && pais[i].prata == pais[j].prata && pais[i].bronze < pais[j].bronze){
        aux = copiaStruct(aux, pais[i]);
        pais[i] = copiaStruct(pais[i], pais[j]);
        pais[j] = copiaStruct(pais[j], aux);
      }
    }
  }
  return pais;
}

medalha *ordemAlfabetica(medalha *pais, int cases){
  int i, j; 
  medalha aux;

  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(pais[i].ouro == pais[j].ouro && pais[i].prata == pais[j].prata && pais[i].bronze == pais[j].bronze && strcmp(pais[i].nome, pais[j].nome) >= 0){
        aux = copiaStruct(aux, pais[i]);
        pais[i] = copiaStruct(pais[i], pais[j]);
        pais[j] = copiaStruct(pais[j], aux);
      }
    }
  }
  return pais;
}

int main() {
  int cases, i, maxOuro = 0;
  medalha participante[500];

  scanf("%d", &cases);
  getchar();
  for(i = 0; i < cases; i++){
    scanf("%s", participante[i].nome);
    scanf("%d", &participante[i].ouro);
    scanf("%d", &participante[i].prata);
    scanf("%d", &participante[i].bronze);
    getchar();

    if(participante[i].ouro > maxOuro){
      maxOuro = participante[i].ouro;
    }
  }

  medalha *outPut = ordemOuro(participante, cases);
  outPut = ordemPrata(outPut, cases);
  outPut = ordemBronze(outPut, cases);
  outPut = ordemAlfabetica(outPut, cases);
  imprimeOrdem(outPut, cases);
  
  return 0;
}
