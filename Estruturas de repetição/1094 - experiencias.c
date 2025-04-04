#include <stdio.h>

int main () {
    int total, counter, num;
    double percent_coelhos, percent_sapos, percent_ratos, coelhos, ratos, sapos;
    char code;
    coelhos = ratos = sapos = percent_ratos = percent_sapos = percent_coelhos = total = 0;

    scanf("%d", &counter);
    for(; counter > 0; counter--){
        scanf("%d %c",&num, &code);
        total = total + num;

        if(code == 'C'){
            coelhos = coelhos + num;
            
        }else if(code == 'R'){
            ratos = ratos + num;

        }else if(code == 'S'){
            sapos = sapos + num;

        }
    }
    percent_coelhos = 100 * (coelhos / total);
    percent_sapos = 100 * (sapos / total);
    percent_ratos = 100 * (ratos / total);

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %.0lf\n", coelhos);
    printf("Total de ratos: %.0lf\n", ratos);   
    printf("Total de sapos: %.0lf\n", sapos);   
    printf("Percentual de coelhos: %.2lf %%\n", percent_coelhos);
    printf("Percentual de ratos: %.2lf %%\n", percent_ratos);
    printf("Percentual de sapos: %.2lf %%\n", percent_sapos);
    
    return 0;
}
