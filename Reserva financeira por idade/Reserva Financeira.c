#include <stdio.h>
#include <locale.h>

int main(){

  int idadeAtual;
  float rendaBruta;
  float patIdeal;

  printf("Esta aplicação ajuda você a descobrir qual é o patrimônio ideal para a sua idade, seguindo o método de Thomas J. Stanley e William D. Danko.\n");
  
  printf("Qual é a sua idade hoje? ");
  scanf("%d", &idadeAtual);
  
  printf("Qual é a sua renda bruta anual? ");
  scanf("%f", &rendaBruta);

  patIdeal = (rendaBruta*idadeAtual) / 10;

  printf("Seu patrimônio ideal de acordo com a idade informada é igual a R$ %f", &patIdeal);

  system("pause");


}