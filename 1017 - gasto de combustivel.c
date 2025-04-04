#include<stdio.h>

int main(){
    int speed, time;
    double tank;

    scanf("%d\n %d\n", &time, &speed);
    tank = (speed * time) / 12.0; 

    printf("%.3lf\n",tank);

    return 0;
}
