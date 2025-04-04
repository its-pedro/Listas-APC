#include <stdio.h>

int main (){
    int n[1000], i, num, counter;
    scanf("%d", &num);
    n[0] = 0;
    printf("N[0] = %d\n", n[0]);

    for(i = 1; i < 1000; i++){
        n[i] = n[i-1] + 1;
        if(n[i] == num){
            n[i] = 0;
        }
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
