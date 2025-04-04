#include<stdio.h>
#include<stdlib.h>
#define n_max 91

int main(){
  int num, bol_in, bol[n_max], i1, i2, i3, i, zero, yep;

  while(0 == 0){
    scanf("%d %d", &num, &bol_in);
    yep = 0;
    if(num == 0 && bol_in == 0){
      break;
    }
    
    for(i = 1; i <= bol_in; i++){
      scanf("%d", &bol[i]);
    }
    
    for(i1 = 0; i1 <= num; i1++){
      
      for(i2 = 1; i2 <= bol_in; i2++){
        
        for(i3 = 1; i3 <= bol_in; i3++){

          if(i1 == abs(bol[i2] - bol[i3])){
            yep++;
            break;
          }
        }
        if(i1 == abs(bol[i2] - bol[i3])){
          break;
        }
      }
    }
    if(yep > num){
      printf("Y\n");
    }else{
      printf("N\n");
    }
      
    for(zero = 1; zero <= bol_in; zero++){
      bol[zero] = 0;
    }
  }
  return 0;
}
