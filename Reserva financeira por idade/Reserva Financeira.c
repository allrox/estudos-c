#include <stdio.h>
#include <locale.h>

int main(){

  int idadeAtual;
  float rendaBruta;
  float patIdeal;

  printf("Esta aplica��o ajuda voc� a descobrir qual � o patrim�nio ideal para a sua idade, seguindo o m�todo de Thomas J. Stanley e William D. Danko.\n");
  
  printf("Qual � a sua idade hoje? ");
  scanf("%d", &idadeAtual);
  
  printf("Qual � a sua renda bruta anual? ");
  scanf("%f", &rendaBruta);

  patIdeal = (rendaBruta*idadeAtual) / 10;

  printf("Seu patrim�nio ideal de acordo com a idade informada � igual a R$ %f", &patIdeal);

  system("pause");


}