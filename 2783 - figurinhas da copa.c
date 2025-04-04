#include <stdio.h>
#define n_max 101

int main() {
  int mark[n_max], figTot, counterMarked, counterBought, counter, marked, bought, figLeft = 0;

  scanf("%d %d %d", &figTot, &counterMarked, &counterBought);

  for(counter = figTot ; counter > 0; counter--){
    mark[counter] = 0;
  }

  for(; counterMarked > 0; counterMarked--){
    scanf("%d", &marked);
    mark[marked] = 1;
  }

  for(; counterBought > 0; counterBought--){
    scanf("%d", &bought);
    mark[bought] = 0;
  }

  for(; figTot > 0; figTot--){
    figLeft = figLeft + mark[figTot];
  }
  
  printf("%d\n", figLeft);
  
  return 0;
}
