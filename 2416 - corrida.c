#include<stdio.h>

int main(){
    int dist, comp, fim ;

    scanf("%d %d", &dist, &comp);

    fim = dist % comp;

    printf("%d\n", fim);

    return 0;
}
