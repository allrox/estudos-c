#include <stdio.h>
#include <locale.h>

int main(){

  system("cls");
  setlocale(LC_ALL,"Portuguese_Brazil");

  int idadeAtual;
  float rendaBruta;

  printf("Esta aplicação calcula o patrimônio ideal para a sua idade,\nseguindo o método de Thomas J. Stanley e William D. Danko.\n\n");
  
  printf("Qual é a sua idade atual? ");
  scanf("%d", &idadeAtual);
  printf("\n");

  printf("Qual é a sua renda bruta anual? ");
  scanf("%f", &rendaBruta);
  printf("\n");

  float patrimonioIdeal = ( ( (float) idadeAtual * rendaBruta ) / 10 );

  printf("O patrimônio ideal de acordo com a idade informada é igual a R$ %.2f\n", &patrimonioIdeal);

  system("pause");
  return 0;

}