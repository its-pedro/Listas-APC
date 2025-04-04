#include<stdio.h>

int main(){
    int dist;
    double consumo, gasto;

    scanf("%d %lf", &dist, &gasto);

    consumo = dist/gasto;

    printf("%.3lf km/l\n", consumo);

    return 0;
}
