#include <stdio.h>

int main (){
    int num, max, idx_max, i;

    scanf("%d", &num);
    max = num;
    idx_max = 1;

    for(i = 2; i <= 100; i++){
        scanf("%d", &num);

        if(num > max){
            max = num;
            idx_max = i;
        }
    }
    printf("%d\n%d\n", max, idx_max);

    return 0;
}
