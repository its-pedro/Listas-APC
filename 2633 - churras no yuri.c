#include <stdio.h>
#include <string.h>

struct carne{
  char nome[21];
  int validade;
};

typedef struct carne Carne;

Carne copiaStruct(Carne molde, Carne copia){
  copia.validade = molde.validade;
  strcpy(copia.nome, molde.nome);
  return copia;
}

void organizaValidade(Carne *analise, int cases){
  int i, j;
  Carne aux;
  for(i = 0; i < cases-1; i++){
    for(j = i+1; j < cases; j++){
      if(analise[i].validade < analise[j].validade){
        aux = copiaStruct(analise[i], aux);
        analise[i] = copiaStruct(analise[j], analise[i]);
        analise[j] = copiaStruct(aux, analise[j]);
      }
    }
  }
}

void imprimeOrdem(Carne *analise, int cases){
  for(int i = cases-1; i > 0; i--){
    printf("%s ", analise[i].nome);
  }
  printf("%s\n", analise[0].nome);
}

int main() {
  int cases, i;
  Carne churras[10];

  while(scanf("%d", &cases) != EOF){
    getchar();
    for(i = 0; i < cases; i++){
      scanf("%s", churras[i].nome);
      scanf("%d", &churras[i].validade);
      getchar();
    }
    organizaValidade(churras, cases);
    imprimeOrdem(churras, cases);
  }
  return 0;
}
