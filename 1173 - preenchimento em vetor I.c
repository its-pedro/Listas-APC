#include <stdio.h>

int main (){
    int x[10], num;
 
    scanf("%d", &num);
    x[0] = num;
    printf("N[0] = %d\n", x[0]);

    for(int i = 1; i < 10; i++){
        x[i] = 2*x[i-1];
        printf("N[%d] = %d\n", i, x[i]);

    }
    return 0;
}
