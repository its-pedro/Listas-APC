#include <stdio.h>

int main (){
    double nota, media;
    int counter;
    media = 0;
    counter = 0;

    while(counter != 2){
        scanf("%lf", &nota);

        if(0 <= nota && nota <= 10){
            media = media + nota;
            counter++;
        }else{
            printf("nota invalida\n");
        }
    }
    media = media / 2;
    printf("media = %.2lf\n", media);
    
    return 0; 
}
