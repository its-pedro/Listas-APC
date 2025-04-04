#include<stdio.h>
#define N_MAX 100

int main (){
  int run, pilot, system, pontuador, points, qntd_champ, score_max;
  int position[N_MAX+1][N_MAX+1], score[N_MAX+1], id_champ[N_MAX+1];
  int i, j, k;

  while(0 == 0){
    scanf("%d %d", &run, &pilot);
    if(run == 0 && pilot == 0){
      break;
    }

    for(i = 1; i <= run; i++){
      for(j = 1; j <= pilot; j++){
        scanf("%d", &position[i][j]);
      }
    }
    scanf("%d", &system);

    while(system > 0){
      scanf("%d", &pontuador);
      score_max = 0;
      qntd_champ = 0;
      for(j = 1; j <= pilot; j++){
        score[j] = 0;
      }

      for(i = 1; i <= pontuador; i++){
        scanf("%d", &points);
        for(k = 1; k <= run; k++){
          for(j = 1; j <= pilot; j++){
            if(position[k][j] == i){
              score[j] = score[j] + points;
              
              if(score[j] > score_max){
                score_max = score[j];
              }
            }
          }
        }
      }
      for(i = 1, j = 1; i <= pilot; i++){
        if(score[i] == score_max){
          id_champ[j] = i;
          qntd_champ++;
          j++;
        }
      }
      for(i = 1; i <= qntd_champ; i++){
        if(i == qntd_champ){
          printf("%d\n", id_champ[qntd_champ]);
        }else{
          printf("%d ", id_champ[i]);
        }
      }
      system--;
    }
  }
  return 0;
}
