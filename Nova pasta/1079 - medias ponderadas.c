#include <stdio.h>

int main (){
    int counter;
    double nota_a, nota_b, nota_c, media;

    scanf("%d", &counter);

    for(; counter > 0; counter--){
        scanf("%lf %lf %lf", &nota_a, &nota_b, &nota_c);
        media = ((nota_a * 2) + (nota_b * 3) + (nota_c * 5)) / 10;
        printf("%.1lf\n", media);
    }
    return 0;
}
