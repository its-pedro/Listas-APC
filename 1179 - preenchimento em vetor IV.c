#include <stdio.h>

int main (){
    int par[5], impar[5], p_counter, i_counter, num, counter, resto_i, resto_p, i, p;
    p_counter = 0;
    i_counter = 0;

    for(counter = 1; counter <= 15; counter++){
        scanf("%d", &num);

        if(num % 2 == 0){ 
            par[p_counter] = num;
            p_counter++;
            
        }else{
            impar[i_counter] = num;
            i_counter++;
            
        }
        if(p_counter == 5){
            for(p = 0; p < 5; p++){
                printf("par[%d] = %d\n", p, par[p]);
                
            }
            p_counter = 0;
        }
        if(i_counter == 5){
            for(i = 0; i < 5; i++){
                printf("impar[%d] = %d\n", i, impar[i]);

            }
            i_counter = 0;
        }
    } 
    for(resto_i = 0; resto_i < i_counter; resto_i++){
        printf("impar[%d] = %d\n", resto_i, impar[resto_i]);
        
    }
    for(resto_p = 0; resto_p < p_counter; resto_p++){
        printf("par[%d] = %d\n", resto_p, par[resto_p]);
        
    }
    return 0;
}
