#include <stdio.h>

int main () {
    int week[1001], two_days[1001], E, Q, e, q, checker, checker_1, checker_2; 

    scanf("%d %d", &Q, &E);

    for(e = 1; e <= E; e++){
        scanf("%d", &two_days[e]);
    }

    for(q = 1; q <= Q; q++){
        scanf("%d", &week[q]);
        checker = 0;
        
        for(checker_1 = 1; checker_1 <= E; checker_1++){
            if(week[q] == two_days[checker_1]){
                checker++;
            }
        }
        for(checker_2 = 1; checker_2 < q; checker_2++){
            if(week[q] == week[checker_2]){
                checker++;
            }
        }
        if(checker == 0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
    return 0;
}
