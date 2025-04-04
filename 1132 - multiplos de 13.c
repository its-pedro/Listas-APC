#include <stdio.h>

int main (){
    int inicio, fim, num_a, num_b, i, soma;
    soma = 0;

    scanf("%d %d", &num_a, &num_b);

    if(num_a > num_b){
        inicio = num_b;
        fim = num_a;
    }else{
        inicio = num_a;
        fim = num_b;
    }
    for(i = inicio; i <= fim; i++){
        if(i % 13 != 0){
            soma = soma + i;
        }
    }
    printf("%d\n", soma);
    
    return 0;
}
