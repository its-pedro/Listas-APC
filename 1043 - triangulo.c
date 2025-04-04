#include<stdio.h>

int main(){
  float side1, side2, side3, perimeter, area;

  scanf("%f %f %f", &side1, &side2, &side3);

  if(side1 < side2 + side3 && side2 < side1 + side3 && side3 < side2 + side1){
    perimeter = side1 + side2 + side3;
    printf("Perimetro = %.1f\n", perimeter);
    
  }else{
    area = ((side1 + side2)* side3)/2;
    printf("Area = %.1f\n", area);
    
  }
  
  return 0;
}
