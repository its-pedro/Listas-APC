#include <stdio.h>

int main () {
    int x1, y1, x2, y2, i;

    while(0 == 0){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){
            break;
        }
        i = 1;
        if(x1 == x2 && y1 == y2){
            printf("0\n");
            
        }else{
            while(i <= 7){
                if(x1 + i == x2 && y1 + i == y2 || x1 - i == x2 && y1 + i == y2 || x1 + i == x2 && y1 - i == y2 || x1 - i == x2 && y1 - i == y2 || x1 == x2 || y1 == y2){
                    printf("1\n");
                    break;
                }
                i++;
            }
            if(i == 8){
                printf("2\n");
            }
        }
    }
    return 0;
}
