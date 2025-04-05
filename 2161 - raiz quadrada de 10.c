#include <stdio.h>

double incremento(int num){
  double plus;
  
  if(num == 0){
    return 0;
  }else if(num == 1){
    return 1.0 / 6.0;
  }
  
  plus = 1.0 / (6.0 + incremento(num-1));
  return plus;
}

int main() {
  int num;
  double plus, raiz;

  scanf("%d", &num);
  plus = incremento(num);
  raiz = 3.0 + plus;
  printf("%.10lf\n", raiz);
  
  return 0;
}
