#include<stdio.h>
int main(){
  int x,a,b,c,d,e,f,g;

  scanf("%d", &x);

  a = x / 100;
  b = (x % 100) / 50;
  c = ((x % 100) % 50) / 20;
  d = (((x % 100) % 50) % 20) / 10;
  e = ((((x % 100) % 50) % 20) % 10) / 5;
  f = (((((x % 100) % 50) % 20) % 10) % 5) / 2;
  g = ((((((x % 100) % 50) % 20) % 10) % 5) % 2) / 1;

  printf("%d\n",x);
  printf("%d nota(s) de R$ 100,00\n", a);
  printf("%d nota(s) de R$ 50,00\n", b);
  printf("%d nota(s) de R$ 20,00\n", c);
  printf("%d nota(s) de R$ 10,00\n", d);
  printf("%d nota(s) de R$ 5,00\n", e);
  printf("%d nota(s) de R$ 2,00\n", f);
  printf("%d nota(s) de R$ 1,00\n", g);

  return 0;
}
