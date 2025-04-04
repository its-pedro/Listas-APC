#include <stdio.h>

int main() {
  double vol, raio;

  scanf("%lf", &raio);
  vol = (4 * 3.14159 * (raio * raio * raio)) / 3;

  printf("VOLUME = %.3lf\n", vol);

  return 0;
}
