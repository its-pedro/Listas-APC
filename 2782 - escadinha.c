#include <stdio.h>
#define N_MAX 1000

int main() {
  int num[N_MAX], counter, dif[N_MAX], escadinhas, i;

  scanf("%d", &counter);
  scanf("%d", &num[0]);
  escadinhas = 1;
  
  if(counter != 1){
    scanf("%d", &num[1]);
    dif[1] = num[1] - num[0];
  }
  
  for(i = 2; i < counter; i++){
    scanf("%d", &num[i]);
    dif[i] = num[i] - num[i-1]; 
      
    if(dif[i-1] != dif[i]){
      escadinhas++;
    }
  }
  printf("%d\n", escadinhas);
    
  return 0;
}
