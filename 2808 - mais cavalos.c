#include <stdio.h>

int main() {
  int linha1, linha2;
  char coluna1, coluna2;

  scanf("%c%d %c%d", &coluna1, &linha1, &coluna2, &linha2);

  if(coluna1 == 'a'){
    if(coluna2 == 'c' && linha2 == linha1 + 1 || coluna2 == 'c' && linha2 == linha1 - 1 || coluna2 == 'b' && linha2 == linha1 + 2 || coluna2 == 'b' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");
      
    }else{
      printf("INVALIDO\n");
      
    } 
  }if(coluna1 == 'b'){
    if(coluna2 == 'd' && linha2 == linha1 + 1 || coluna2 == 'd' && linha2 == linha1 - 1 || coluna2 == 'c' && linha2 == linha1 + 2 || coluna2 == 'a' && linha2 == linha1 + 2 || coluna2 == 'c' && linha2 == linha1 - 2 || coluna2 == 'a' && linha2 == linha1 - 2){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  }if(coluna1 == 'c'){
    if(coluna2 == 'e' && linha2 == linha1 + 1 || coluna2 == 'a' && linha2 == linha1 + 1 || coluna2 == 'e' && linha2 == linha1 - 1 || coluna2 == 'a' && linha2 == linha1 - 1 || coluna2 == 'd' && linha2 == linha1 + 2 || coluna2 ==  'b' && linha2 == linha1 + 2 ||coluna2 == 'd' && linha2 == linha1 - 2 || coluna2 == 'b' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  }if(coluna1 == 'd'){
    if(coluna2 == 'f' && linha2 == linha1 + 1 || coluna2 == 'b' && linha2 == linha1 + 1 || coluna2 == 'f' && linha2 == linha1 - 1 || coluna2 == 'b' && linha2 == linha1 - 1 || coluna2 == 'e' && linha2 == linha1 + 2 || coluna2 == 'c' && linha2 == linha1 + 2 || coluna2 == 'e' && linha2 == linha1 - 2 || coluna2 == 'c' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  }if(coluna1 == 'e'){
    if(coluna2 == 'g' && linha2 == linha1 + 1|| coluna2 == 'c' && linha2 == linha1 + 1 || coluna2 == 'g' && linha2 == linha1 - 1 || coluna2 == 'c' && linha2 == linha1 - 1 || coluna2 == 'f' && linha2 == linha1 + 2 || coluna2 == 'd' && linha2 == linha1 + 2 || coluna2 == 'f' && linha2 == linha1 - 2 || coluna2 == 'd' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  }if(coluna1 == 'f'){
    if(coluna2 == 'h' && linha2 == linha1 + 1 || coluna2 == 'd' && linha2 == linha1 + 1 || coluna2 == 'h' && linha2 == linha1 - 1 || coluna2 == 'd' && linha2 == linha1 - 1 || coluna2 == 'g' && linha2 == linha1 + 2 || coluna2 == 'e' && linha2 == linha1 + 2 || coluna2 == 'e' && linha2 == linha1 - 2 || coluna2 == 'g' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  }if(coluna1 == 'g'){
    if(coluna2 == 'e' && linha2 == linha1 + 1 || coluna2 == 'e' && linha2 == linha1 - 1 || coluna2 == 'f' && linha2 == linha1 + 2 || coluna2 == 'h' && linha2 == linha1 + 2 || coluna2 == 'f' && linha2 == linha1 - 2 || coluna2 == 'h' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  }if(coluna1 == 'h'){
    if(coluna2 == 'f' && linha2 == linha1 + 1 || coluna2 == 'f' && linha2 == linha1 - 1 || coluna2 == 'g' && linha2 == linha1 + 2 || coluna2 == 'g' && linha2 == linha1 - 2 ){
      printf("VALIDO\n");

    }else{
      printf("INVALIDO\n");

    } 
  } 
  return 0;
}
