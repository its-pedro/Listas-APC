#include<stdio.h>
#include<stdlib.h>

int main (){
  int star_total, star_counter, path;
  long long int carneiro_total;
  star_counter = 0;
  path = 1;
  carneiro_total = 0;
  
  scanf("%d", &star_total);
  long long int *carneiro = (long long int *) malloc(star_total*sizeof(long long int));
  int *pos_array = (int *) malloc(star_total*sizeof(int));
  
  for(int i = 1; i <= star_total; i++){
    scanf("%lld", carneiro + i);
    pos_array[i] = 0;
  }
  
  while(0 == 0){
    if(carneiro[path] == 0){
      break;
    }  
    
    if(pos_array[path] == 0){
      pos_array[path] = 1;
    }    
    
    if(carneiro[path] % 2 == 0){
      carneiro[path]--;
      path--;    
      
    }else{
      carneiro[path]--;
      path++;   
      
    }
    if(1 > path || path > star_total){
      break;
    }
  }

  for(int teste = 1; teste <= star_total; teste++){
    star_counter = star_counter + pos_array[teste];
    carneiro_total = carneiro_total + carneiro[teste];
  }
  
  printf("%d %lld\n", star_counter, carneiro_total);
  
  return 0;
}
