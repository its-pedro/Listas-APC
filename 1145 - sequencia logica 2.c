#include <stdio.h>

int main (){
    int num, i, max;
    scanf("%d %d", &num, &max);

    for(i = 1; i <= max; i++){
        if(i % num == 0){
            printf("%d\n", i);
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}
