#include <stdio.h>
#define n_max 1001

int main() {
  int nota[n_max], note[n_max], qntd_approved, approved, qntd, max, corte, position;

  scanf("%d", &qntd);
  scanf("%d", &qntd_approved);
  approved = 0;
  for(int i = 1; i <= qntd; i++){
    scanf("%d", &nota[i]);
    note[i] = nota[i];
  }
  
  for(; qntd_approved > 0; qntd_approved--){
    max = 0;
    for(int counter = 1; counter <= qntd; counter++){
      if(note[counter] > max){
        max = note[counter];
        position = counter;
      }
    }
    note[position] = 0;
  }
  corte = max;

  for(; qntd > 0; qntd--){
    if(nota[qntd] >= corte){
      approved++;
    }
  }  
  printf("%d\n", approved);
  
  return 0;
}
