#include <stdio.h>

int main () {
    int num;
    
    scanf("%d", &num);

    for(int i = 2; i <= 10000; i = i + num){
        printf("%d\n", i);
    }
    return 0;
}
