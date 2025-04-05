#include <stdio.h>
#include <string.h>

struct godOfWar{
  char nome[101];
  int power;
  int kills;
  int deaths;
};

typedef struct godOfWar GoW; 

char* menorLexic(GoW *check, int cases){
  int i;
  char *ref = check[0].nome;

  for(i = 1; i < cases; i++){
    if(strcmp(ref, check[i].nome) >= 0){
      ref = check[i].nome;
    }
  }
  return ref;  
}

char* newGodOfWar(GoW* candidato, int cases, int mP){
  char *God;
  GoW sup1[100], sup2[100], sup3[100];
  int i, j, qntd, mK = 0, mD = 100;

  for(i = 0, j = 0; i < cases; i++){
    if(candidato[i].power == mP){
      sup1[j] = candidato[i];
      j++;
    }
  }
  if(j == 1){
    return sup1[j-1].nome;
  }
  
  qntd = j;
  for(i = 0; i < qntd; i++){
    if(sup1[i].kills >= mK){
      mK = sup1[i].kills;
    }
  }
  for(i = 0, j = 0; i < qntd; i++){
    if(sup1[i].kills == mK){
      sup2[j] = sup1[i];
      j++;
    }
  }
  if(j == 1){
    return sup2[j-1].nome;
  }
  
  qntd = j;
  for(i = 0; i < qntd; i++){
    if(sup2[i].deaths <= mD){
      mD = sup2[i].deaths;
    }
  }
  for(i = 0, j = 0; i < qntd; i++){
    if(sup2[i].deaths == mD){
      sup3[j] = sup2[i];
      j++;
    }
  }
  if(j == 1){
    return sup3[j-1].nome;
  }
  
  qntd = j;
  God = menorLexic(sup3, qntd);
  return God;
}

int main() {
  int cases, i, maxPower = 0, maxKills = 0, minDeaths = 100;
  char* God;
  GoW seres[100];

  scanf("%d", &cases);
  getchar();
  for(i = 0; i < cases; i++){
    scanf("%s", seres[i].nome);
    scanf("%d", &seres[i].power);
    scanf("%d", &seres[i].kills);
    scanf("%d", &seres[i].deaths);
    getchar();

    if(seres[i].power >= maxPower){
      maxPower = seres[i].power;
    }
  }
  God = newGodOfWar(seres, cases, maxPower);
  printf("%s\n", God);
  
  return 0;
}
