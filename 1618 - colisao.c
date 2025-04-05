#include<stdio.h>
#define N_MAX 10

int main (){
  
  int cases, robotX, robotY, city[N_MAX+1][N_MAX+1];
  int ax, ay, bx, by, cx, cy, dx, dy, i, j;

  scanf("%d", &cases);
  while(cases > 0){

    scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &robotX, &robotY);

    for(i = 1; i <= 10; i++){
      for(j = 1; j <= 10; j++){
        if(ax <= i && dx <= i && i <= bx && i <= cx){
          if(ay <= j && by <= j && j <= cy && j <= dy){
            city[i][j] = 1;
          }else{
            city[i][j] = 0;
          }
        }else{
          city[i][j] = 0;
        }
      }
    }
    /*for(i = 1; i < 11; i++){
      for(j = 1; j < 10; j++){
        printf("%d ", city[i][j]);
      }
      printf("%d\n", city[i][10]);
    }*/
    if(city[robotX][robotY] == 1){
      printf("1\n");
    }else{
      printf("0\n");
    }
    cases--;
  }
  return 0;
}
