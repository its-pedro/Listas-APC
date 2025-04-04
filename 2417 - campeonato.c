#include<stdio.h>

int main(){
  int Cv, Ce, Cs, Cp, Fv, Fe, Fs, Fp;

  scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
  Cp = 3*Cv + Ce;
  Fp = 3*Fv + Fe;

  if(Cp > Fp){
    printf("C\n");
    
  }if(Fp > Cp){
    printf("F\n");
    
  }if(Fp == Cp){
    if(Cs > Fs){
      printf("C\n");
      
    }if(Cs < Fs){
      printf("F\n");
      
    }if(Cs == Fs){
      printf("=\n");
      
    }
  }
  return 0;
}
