#include <stdio.h>

int main () {
    int num, quadrado;
    
    scanf("%d", &num);

    for(int i = 2; i <= num; i = i + 2){
        quadrado = i * i;
        printf("%d^2 = %d\n", i, quadrado);
    }
    return 0;
}
