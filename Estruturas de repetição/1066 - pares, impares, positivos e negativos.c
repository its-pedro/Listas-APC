#include <stdio.h>

int main () {
    int n_positivo, n_par, n_impar, n_negativo, num;

    n_positivo = 0;
    n_negativo = 0;
    n_par = 0;
    n_impar = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &num);

        if(num > 0){
            n_positivo++;
            
        }else if(num < 0){
            n_negativo++;
            
        }
        if(num % 2 == 0){
            n_par++;
            
        }else{
            n_impar++;
                
        }
    }
    printf("%d valor(es) par(es)\n", n_par);
    printf("%d valor(es) impar(es)\n", n_impar);
    printf("%d valor(es) positivo(s)\n", n_positivo);
    printf("%d valor(es) negativo(s)\n", n_negativo);
    
    return 0;
}
