#include<stdio.h>

int main(){
  float nota1, nota2, nota3, nota4, nota5, media, mediaf;

  scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

  media = (2 * nota1 + 3 * nota2 + 4 * nota3 + nota4) / 10.0;

  if(media >= 7.0){
    printf("Media: %.1f\nAluno aprovado.\n", media);
    
  }if(media < 5){
    printf("Media: %.1f\nAluno reprovado.\n", media);
  
  }if(media >= 5 && media < 7){
    printf("Media: %.1f\nAluno em exame.\n", media);
    scanf("%f", &nota5);
    printf("Nota do exame: %.1f\n", nota5);
    mediaf = (media + nota5) / 2.0;
    
    if(mediaf >= 5){
      printf("Aluno aprovado.\nMedia final: %.1f\n", mediaf);
      
    }else{
      printf("Aluno reprovado.\nMedia final: %.1f\n", mediaf);
      
    }
  }
  return 0;
}
