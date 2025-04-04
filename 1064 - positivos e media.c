#include <stdio.h>

int main () {
    int n_positivo;
    double num, soma, media;
    n_positivo = 0;
    soma = 0;
    
    for(int i = 0; i < 6; i++){
        scanf("%lf", &num);

        if(num > 0){
            soma = soma + num;
            n_positivo++;
            
        }
    }
    media = soma / n_positivo;
    printf("%d valores positivos\n", n_positivo);
    printf("%.1lf\n", media);
    
    return 0;
}
