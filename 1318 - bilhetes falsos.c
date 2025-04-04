#include <stdio.h>
#include <stdlib.h>

int main() {
  int counter_1, counter_2, t_tickets, t_guests, fake;
  
  while(0 == 0){
    scanf("%d %d", &t_tickets, &t_guests);
    if(t_tickets == 0 && t_guests == 0){
      break;
    }
    int *guest = (int *) malloc(t_guests*sizeof(int));
    int *checker = (int *) malloc((t_tickets + 1)*sizeof(int));
    fake = 0;
    
    scanf("%d", &guest[0]);
    for(counter_1 = 0; counter_1 <= t_tickets; counter_1++){
      checker[counter_1] = 0;
    }
  
    for(counter_1 = 1; counter_1 < t_guests; counter_1++){
      scanf("%d", &guest[counter_1]);
  
      for(counter_2 = 0; counter_2 < counter_1; counter_2++){
        if(guest[counter_1] == guest[counter_2]){
          checker[guest[counter_1]] = 1;
        }
      }
    }
    for(int i = 1; i <= t_tickets; i++){
      fake = fake + checker[i];
    }
    printf("%d\n", fake);

    free(guest);
    free(checker);
  }
  
  return 0;
}
