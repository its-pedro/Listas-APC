#include<stdio.h>

int main(){
    int cod1, cod2, qntd1, qntd2;
    double val1, val2, tot;

    scanf("%d %d %lf\n", &cod1, &qntd1, &val1);
    scanf("%d %d %lf\n", &cod2, &qntd2, &val2);

    tot = (qntd1 * val1)+(qntd2 * val2);

    printf("VALOR A PAGAR: R$ %.2lf\n", tot);

    return 0;
}
