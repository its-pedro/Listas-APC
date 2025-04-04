#include <stdio.h>

int main() {
  int dia1, hora1, min1, seg1, dia2, hora2, min2, seg2, x, w, z, y;

  scanf("Dia %d\n", &dia1);
  scanf("%d : %d : %d\n", &hora1, &min1, &seg1);
  scanf("Dia %d\n", &dia2);
  scanf("%d : %d : %d\n", &hora2, &min2, &seg2);

  w = dia2 - dia1;
  x = hora2 - hora1;
  y = min2 - min1;
  z = seg2 - seg1;

  
  if(z <= -1){
    z = z + 60;
    y--;
    
  }if(y <= -1){
    y = y + 60;
    x--;
    
  }if(x <= -1){
    x = x + 24;
    w--;
    
  } 
  printf("%d dia(s)\n", w);
  printf("%d hora(s)\n", x);
  printf("%d minuto(s)\n", y);
  printf("%d segundo(s)\n", z);
    
  return 0;
}
