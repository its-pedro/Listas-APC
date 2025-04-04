#include <stdio.h>

int main() {
  int carne, massa, frango, dcarne, dfrango, dmassa, deficit;

  scanf("%d %d %d", &frango, &carne, &massa);
  scanf("%d %d %d", &dfrango, &dcarne, &dmassa);
  deficit =0;

  if(frango < dfrango){
    deficit = deficit + (dfrango - frango);
    
  }if(carne < dcarne){
    deficit = deficit + (dcarne - carne);
    
  }if(massa < dmassa){
    deficit = deficit + (dmassa - massa);
    
  }
  printf("%d\n", deficit);
  
  return 0;
}
