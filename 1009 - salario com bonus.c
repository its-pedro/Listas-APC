#include<stdio.h>

int main(){
  char nome;
  double fixo, bonus, total;

  scanf("%s", &nome);
  scanf("%lf", &fixo);
  scanf("%lf", &bonus);

  total = fixo + (0.15 * bonus);

  printf("TOTAL = R$ %.2lf\n", total);

  return 0;
}
