#include <stdio.h>

int main (){
    int num, i;
    scanf("%d", &num);

    for(i = 1; i <= num * 4; i++){
        if(i % 4 == 0){
            printf("PUM\n");
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}
