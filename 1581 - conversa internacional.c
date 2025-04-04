#include <stdio.h>
#include <string.h>
#define N_MAX 20

int main() {
  int counter, cases, resp;
  char lang_1[N_MAX + 1], lang[N_MAX + 1];
  
  scanf("%d", &cases);

  for(; cases > 0; cases--){
    scanf("%d", &counter);
    resp = 0;
    scanf("%s", lang_1);
    counter--;
    
    for(; counter > 0; counter--){
      scanf("%s", lang);

      if(strcmp(lang, lang_1) != 0){
        resp = -1;
      }
    }
    
    if(resp == 0){
      printf("%s\n", lang_1);
    }else{
      printf("ingles\n");
    }
  }
  return 0;
}
