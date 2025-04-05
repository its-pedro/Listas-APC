#include <stdio.h>
#include <string.h>
#define N_MAX 100
#define C_MAX 2000

struct Produto{
  char nome[N_MAX+1];
  double valor;
  int qntd;
};

typedef struct Produto produto;

void adicionaCarrinho (produto carrinho[C_MAX], produto item, int caso){
  carrinho[caso].valor = item.valor;
  strcpy(carrinho[caso].nome, item.nome);
}

produto copiaStruct (produto molde, produto copia){
  copia.valor = molde.valor;
  copia.qntd = molde.qntd;
  strcpy(copia.nome, molde.nome);
  return copia;
}

void ordemAlfabetica (produto carrinho[C_MAX], int qntd){
  int i, j;
  produto aux;
  
  for(i = 0; i < qntd - 1; i++){
    for(j = i + 1; j < qntd; j++){
      if(strcmp(carrinho[i].nome, carrinho[j].nome) > 0){
        aux = copiaStruct(carrinho[i], aux);
        carrinho[i] = copiaStruct(carrinho[j], carrinho[i]);
        carrinho[j] = copiaStruct(aux, carrinho[j]);
      }
    }
  }
}

int maiorQuantidadeAdicionada (double dindin, int max, double valor){
  int i;
  for(i = max; i > 0; i--){
    if(i*valor <= dindin){
      return i;
    }
  }
  return i;
}

int CheckerProduto(produto carrinho[C_MAX], char item[N_MAX+1], int caso){
  int posItem = -1;
  for(int i = 0; i < caso; i++){
    if(strcmp(carrinho[i].nome, item) == 0){
      posItem = i;
    }
  }  
  return posItem;
}

void imprimeCarrinho(produto carrinho[C_MAX], int qntd){
  double total = 0;

  ordemAlfabetica(carrinho, qntd);
  
  for(int j = 0; j < qntd; j++){
    if(carrinho[j].qntd != 0){
      printf("%s %d x %.2lf = %.2lf\n", carrinho[j].nome,carrinho[j].qntd, carrinho[j].valor, carrinho[j].qntd*carrinho[j].valor);
      total += carrinho[j].qntd*carrinho[j].valor;
    }
  }
  printf("TOTAL: %.2lf\n", total);
}

int main() {
  int actions, i = 0, add, checker, qntd;
  double orcamento, newValue;
  char code, RouA[N_MAX+1];
  produto carrinho[C_MAX], item;

  scanf("%d %lf", &actions, &orcamento);
  getchar();

  while(actions > 0){
    scanf("%c", &code);
    getchar();

    if(code == 'C'){ //adiciona itens ao carrinho
      scanf("%s %lf %d", item.nome, &item.valor, &item.qntd);
      getchar();
      checker = CheckerProduto(carrinho, item.nome, i);
      
      if(checker == -1){
        add = maiorQuantidadeAdicionada(orcamento, item.qntd, item.valor);
        adicionaCarrinho(carrinho, item, i);
        carrinho[i].qntd = add;
        orcamento = orcamento - (carrinho[i].qntd * carrinho[i].valor);
        i++;
        
      }else{
        orcamento = orcamento + (carrinho[checker].qntd * carrinho[checker].valor);
        carrinho[checker].qntd = maiorQuantidadeAdicionada(orcamento, (item.qntd + carrinho[checker]. qntd), item.valor);
        orcamento = orcamento - (carrinho[checker].qntd * carrinho[checker].valor);
      }  
    
    }else if(code == 'M'){ //mostra o total de itens no carrinho
      imprimeCarrinho(carrinho, i);
      //printf("Orcamento = %.2lf\n", orcamento);
   
    }else if(code == 'R'){ //remove um item do carrinho
      scanf("%s %d", RouA, &qntd);
      getchar();
      
      checker = CheckerProduto(carrinho, RouA, i);
      if(checker  >= 0 && carrinho[checker].qntd != 0){        
        if(qntd > carrinho[checker].qntd){
          carrinho[checker].qntd = 0;
        }else{
          carrinho[checker].qntd -= qntd;
        }
        orcamento = orcamento + (qntd*carrinho[checker].valor);
        
      }else{
        printf("ERRO: O produto %s nao esta no carrinho\n", RouA);
      }
    }else if(code == 'A'){ //altera o preco de um item do carrinho
      scanf("%s %lf", RouA, &newValue);
      getchar();

      checker = CheckerProduto(carrinho, RouA, i);
      if(checker >= 0 && carrinho[checker].qntd != 0){
        orcamento = orcamento + (carrinho[checker].qntd * carrinho[checker].valor);
        carrinho[checker].valor = newValue;
        carrinho[checker].qntd = maiorQuantidadeAdicionada(orcamento, carrinho[checker].qntd, newValue);
        orcamento = orcamento - (carrinho[checker].qntd* carrinho[checker].valor);

      }else{
        printf("ERRO: O produto %s nao esta no carrinho\n", RouA);
      }
    }
    actions--;
  }
  return 0;
}
