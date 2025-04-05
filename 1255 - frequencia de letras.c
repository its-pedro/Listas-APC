#include <stdio.h>
#include <string.h>
#define L_MAX 200
#define Alphabet 26

int letterFrequency(char* frase, int size, int letra){
  int i, frequency;

  for(i = 0, frequency = 0; i < size; i++){
    if(frase[i] == letra+64 || frase[i] == letra+96){
      frequency++;
    }
  }
  return frequency;
}

void impremeFrequency(int *freq, int freqMax){
  int i;
  char letra;
  
  for(i = 1; i <= Alphabet; i++){
    if(freq[i] == freqMax){
      letra = i+96;
      printf("%c", letra);
    }
  }
  printf("\n");
}

int main (){
  int cases, freq[Alphabet+1], i, freqMax, size;
  char frase[L_MAX+1];

  scanf("%d", &cases);
  getchar();

  while(cases > 0){
    scanf("%[^\n]s", frase);
    getchar();
    size = strlen(frase);
    freqMax = 0;

    for(i = 1; i <= Alphabet; i++){
      freq[i] = letterFrequency(frase, size, i);

      if(freq[i] > freqMax){
        freqMax = freq[i];
      }
    }
    impremeFrequency(freq, freqMax);
    cases--;
  }
  return 0;
}
