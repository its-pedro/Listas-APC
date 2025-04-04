#include<stdio.h>
#include<string.h>
#define N_MAX 100
#define M_MAX 10000

int main(){
  int size, max, total;
  int i, n, q, j, k, l;
  char search[N_MAX], data[N_MAX][M_MAX];

  scanf("%d", &n);
  getchar();

  for(i = 0; i < n; i++){
    scanf("%s", &data[i]);
    getchar();
  }
  
  scanf("%d", &q);
  getchar();

  for(i = 0; i < q; i++){
    scanf("%s", search);
    getchar();
    max = 0;
    total = 0;
    
    for(j = 0; j < n; j++){
      l = strlen(search);
      
      for(k = 0; k < l; k++){
        if(search[k] != data[j][k]){
          break;
        }
      }
      if(k == l){
        total++;
        size = strlen(data[j]);

        if(size > max){
          max = size;
        }
      }
    }
    if(total == 0){
      printf("-1\n");
    }else{
      printf("%d %d\n", total, max);
    }
  } 
  return 0;
}
