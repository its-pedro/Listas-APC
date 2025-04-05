#include <stdio.h>
#include <stdlib.h>

int* Fibonacci(int num){
  int i; 
  int* fibonacci = (int*) malloc(sizeof(int) * (num+1));

  fibonacci[1] = 0;
  fibonacci[2] = 1;

  for(i = 3; i <= num; i++){
    fibonacci[i] = fibonacci[i-1]+ fibonacci[i-2];
  }
  return fibonacci;
}

int main() {
  int num, i;
  int* fib;

  scanf("%d", &num);
  fib = Fibonacci(num);

  for(i = 1; i < num; i++){
    printf("%d ", fib[i]);
  }
  printf("%d\n", fib[num]);

  free(fib);
  
  return 0;
}
