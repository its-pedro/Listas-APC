#include <stdio.h>

int main (){
    int votos, votos_c, counter, i, winner;

    scanf("%d", &counter);
    scanf("%d", &votos_c);
    winner = votos_c;
    counter--;

    for(int i = 0; i < counter; i++){
        scanf("%d", &votos);

        if(votos > winner){
            winner = votos;
        }
    }
    if(winner == votos_c){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}
