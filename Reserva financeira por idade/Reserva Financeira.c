#include <stdio.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Portuguese_Brazil");

  int idadeAtual;
  int rendaBruta;
  int patIdeal;

  printf("Esta aplica��o ajuda voc� a descobrir qual � o patrim�nio ideal para a sua idade, seguindo o m�todo de Thomas J. Stanley e William D. Danko.\n");
  
  printf("Qual � a sua idade atual? ");
  scanf("%d", &idadeAtual);
  
  printf("Qual � a sua renda bruta anual? ");
  scanf("%d", &rendaBruta);

  patIdeal = (float)((idadeAtual*rendaBruta)/10);

  printf("Seu patrim�nio ideal de acordo com a idade informada � igual a R$ %d \n", &patIdeal);

}