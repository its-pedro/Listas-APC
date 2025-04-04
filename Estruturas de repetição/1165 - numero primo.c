#include <stdio.h>

int main (){
    int num, counter, div;
    scanf("%d", &counter);

    for(; counter > 0; counter--){
        scanf("%d", & num);
        div = 0;
        
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                div++;
            }
        }
        if(div == 0){
            printf("%d eh primo\n", num);
        }else{
            printf("%d nao eh primo\n", num);
        }
    }
    return 0; 
}
