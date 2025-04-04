#include <stdio.h>

int main (){
    int itens, n_bolinhos, b_natan, b_samuel, i_natan, i_samuel, n, s;
    scanf("%d %d", &itens, &n_bolinhos);
    b_natan = 0;
    b_samuel = 0;

    for(n = 0; n < itens; n++){
        scanf("%d", &i_natan);

        if(i_natan == 1){
            b_natan++;
        }
    }
    for(s = 0; s < itens; s++){
        scanf("%d", &i_samuel);

        if(i_samuel == 1){
            b_samuel++;
        }
    }
    if(b_natan == n_bolinhos){
        printf("Tudo certo.\n");
        
    }else if (b_samuel == n_bolinhos){
        printf("Pegou de Samuel.\n");
        
    }else{
        printf("Pegou de um estranho.\n");
    }

    return 0;
}
