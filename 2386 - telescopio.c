#include<stdio.h>
#define n_max 20000

int main (){
  double areaTelescope, starEmitionMin; 
  int starCounter, visibleStarCounter, starEmition[n_max];
  
  scanf("%lf", &areaTelescope);  
  scanf("%d", &starCounter);
  starEmitionMin = 40000000 / areaTelescope;
  visibleStarCounter = 0;
  
  for(int i = 1; i <= starCounter; i++){
    scanf("%d", &starEmition[i]);

    if(starEmition[i] >= starEmitionMin){
      visibleStarCounter++;
    }
  }
  printf("%d\n", visibleStarCounter);
  
  return 0;
}
