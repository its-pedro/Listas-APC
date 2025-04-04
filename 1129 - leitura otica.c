#include <stdio.h>

int main() {
  int counter, questoes, alt_1, alt_2, alt_3, alt_4, alt_5;
  char resposta;

  while(0 == 0){
    scanf("%d", &questoes);
    if(questoes == 0){
      break;
    }
    
    for(;questoes > 0; questoes--){
      counter = 0;
      scanf("%d %d %d %d %d", &alt_1, &alt_2, &alt_3, &alt_4, &alt_5);

      if(alt_1 <= 127){
        resposta = 'A';
        counter++;
      }
      if(alt_2 <= 127){
        resposta = 'B';
        counter++;
      }
      if(alt_3 <= 127){
        resposta = 'C';
        counter++;
      }
      if(alt_4 <= 127){
        resposta = 'D';
        counter++;
      }
      if(alt_5 <= 127){
        resposta = 'E';
        counter++;
      }

      if(counter == 1){
        printf("%c\n", resposta);
      }else{
        resposta = '*';
        printf("%c\n", resposta);
      }
    }
  }
  return 0;
}
