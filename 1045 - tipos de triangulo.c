#include<stdio.h>

int main(){
  float A, B, C, sideA, sideB, sideC;

  scanf("%f %f %f", &A, &B, &C);

  if(A >= B && A>=C && B >= C){
    sideA = A;
    sideB = B;
    sideC = C;
    
  }if(A >= B && A>=C && C >= B){
    sideA = A;
    sideB = C;
    sideC = B;

  }if(B >= A && B >= C && A >= C){
    sideA = B;
    sideB = A;
    sideC = C;

  }if(B >= A && B>=C && A <= C){
    sideA = B;
    sideB = C;
    sideC = A;

  }if(C >= B && A <= C && B >= A){
    sideA = C;
    sideB = B;
    sideC = A;

  }if(C >= B && A <= C && A >= B){
    sideA = C;
    sideB = A;
    sideC = B;
  
  }if(sideA >= sideB + sideC){
    printf("NAO FORMA TRIANGULO\n");

  }else{
    if(sideA * sideA == sideB * sideB + sideC * sideC){
      printf("TRIANGULO RETANGULO\n");

    }if(sideA * sideA > sideB * sideB + sideC * sideC){
      printf("TRIANGULO OBTUSANGULO\n");

    }if(sideA * sideA < sideB * sideB + sideC * sideC){
      printf("TRIANGULO ACUTANGULO\n");

    }if(sideA == sideB && sideA != sideC || sideA == sideC && sideA != sideB || sideB == sideC && sideB != sideA){
      printf("TRIANGULO ISOSCELES\n");

    }if(sideA == sideB && sideA == sideC && sideB == sideC){
      printf("TRIANGULO EQUILATERO\n");

    }
  }
  return 0;
}
