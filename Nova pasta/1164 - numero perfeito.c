#include <stdio.h>

int main (){
    int num, counter, div;
    scanf("%d", &counter);

    for(; counter > 0; counter--){
        scanf("%d", & num);
        div = 0;
        
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                div = div + i;
            }
        }
        if(div == num){
            printf("%d eh perfeito\n", num);
        }else{
            printf("%d nao eh perfeito\n", num);
        }
    }
    return 0; 
}
