#include <stdio.h>

int main (){
    int i, num_1, num_2, soma, maior, menor;
    scanf("%d %d", &num_1, &num_2);

    while(num_1 > 0 && num_2 > 0){
        soma = 0;
    
        if(num_1 < num_2){
            maior = num_2;
            menor = num_1;
        }else{
            menor = num_2;
            maior = num_1;
        }
    
        for(i = menor; i <= maior; i++){
            printf("%d ", i);
            soma = soma + i;
        }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &num_1, &num_2);

    }
    return 0;
}
