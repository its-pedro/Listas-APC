#include<stdio.h>

int main(){
    int speed, time, distance;

    scanf("%d", &distance);
    speed = 30,0;

    time = (distance * 60 / speed); 

    printf("%d minutos\n",time);

    return 0;
}
