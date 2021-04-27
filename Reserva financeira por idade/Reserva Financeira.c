#include <stdio.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Portuguese_Brazil");

  int idadeAtual;
  int rendaBruta;
  int patIdeal;

  printf("Esta aplicação ajuda você a descobrir qual é o patrimônio ideal para a sua idade, seguindo o método de Thomas J. Stanley e William D. Danko.\n");
  
  printf("Qual é a sua idade atual? ");
  scanf("%d", &idadeAtual);
  
  printf("Qual é a sua renda bruta anual? ");
  scanf("%d", &rendaBruta);

  patIdeal = (float)((idadeAtual*rendaBruta)/10);

  printf("Seu patrimônio ideal de acordo com a idade informada é igual a R$ %d \n", &patIdeal);

}