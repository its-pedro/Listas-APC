#include <stdio.h>
#include <string.h>
#define N_MAX 100

int main() {
  int cases;
  char placa[N_MAX + 1];

  scanf("%d", &cases);
  for(; cases > 0; cases--){
    scanf("%s", placa);

    if(placa[0] > 64 && placa[0] < 91 && placa[1] > 64 && placa[1] < 91 && placa[2] > 64 && placa[2] < 91 && placa[3] == '-' && placa[4] > 47 && placa[4] < 58 && placa[5] > 47 && placa[5] < 58 && placa[6] > 47 && placa[6] < 58 && placa[7] > 47 && placa[7] < 58 && placa[8] == '\0'){
      if(placa[7] == '1' || placa[7] == '2'){
        printf("MONDAY\n");
      }else if(placa[7] == '3' || placa[7] == '4'){
        printf("TUESDAY\n");
      }else if(placa[7] == '5' || placa[7] == '6'){
        printf("WEDNESDAY\n");
      }else if(placa[7] == '8' || placa[7] == '7'){
        printf("THURSDAY\n");
      }else if(placa[7] == '9' || placa[7] == '0'){
        printf("FRIDAY\n");
      }
    }else{
      printf("FAILURE\n");
    }
  }
  return 0;
}
