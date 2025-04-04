#include <stdio.h>

int main (){
    long long int fib[61];
    int i, counter, num;
    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < 61; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    scanf("%d", &counter);

    while(counter > 0){
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n",num, fib[num]);
        counter--;
    }
    return 0;
}
