#include <stdio.h>
#define N_MAX 2001

int main() {
  int i, cases, freq[N_MAX], num[20*N_MAX];
  scanf("%d", &cases);

  for(i = 1; i <= 2000; i++){
    freq[i] = 0;
  }

  for(i = 0; cases > i; i++){
    scanf("%d", &num[i]);
    freq[num[i]]++;
  }

  for(i = 1; i <= 2000; i++){
    if(freq[i] != 0){
      printf("%d aparece %d vez(es)\n", i, freq[i]);
    }
  }
  return 0;
}
