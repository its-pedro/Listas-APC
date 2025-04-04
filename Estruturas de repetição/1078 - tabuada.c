#include <stdio.h>

int main () {
    int num, produto;
    
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        produto = num * i;
        printf("%d x %d = %d\n", i, num, produto);
    }
    return 0;
}
