#include <stdio.h>
#include <locale.h>

int main(){

  system("cls");
  setlocale(LC_ALL,"Portuguese_Brazil");

  int idadeAtual;
  float rendaBruta;

  printf("Esta aplica��o calcula o patrim�nio ideal para a sua idade,\nseguindo o m�todo de Thomas J. Stanley e William D. Danko.\n\n");
  
  printf("Qual � a sua idade atual? ");
  scanf("%d", &idadeAtual);
  printf("\n");

  printf("Qual � a sua renda bruta anual? ");
  scanf("%f", &rendaBruta);
  printf("\n");

  float patrimonioIdeal = ( ( (float) idadeAtual * rendaBruta ) / 10 );

  printf("O patrim�nio ideal de acordo com a idade informada � igual a R$ %.2f\n", &patrimonioIdeal);

  system("pause");
  return 0;

}