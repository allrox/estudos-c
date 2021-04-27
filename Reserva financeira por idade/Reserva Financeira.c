#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Portuguese_Brazil");
  system("cls");
  
  long int idade;
  long int renda;
  long int patrHoje;
  
  printf("Esta aplicação calcula o patrimônio ideal para a sua idade,\nseguindo o método de Thomas J. Stanley e William D. Danko.\n\n");
  
  printf("Qual é a sua idade atual? ");
  scanf("%ld", &idade);

  printf("Qual é a sua renda bruta anual? ");
  scanf("%ld", &renda);
  printf("\n");

  float patrIdeal = (idade*renda)/10;

  printf("O patrimônio ideal para sua idade é R$ %.2f\n", patrIdeal);
  printf("\n");
  printf("Qual é o seu patrimônio atual? ");
  scanf("%ld", &patrHoje);

    if (patrHoje < patrIdeal) {
      float diferenca = patrIdeal - patrHoje;
      float difPercentual = 100-((diferenca / patrIdeal)*100);
      printf("Você ainda precisa de R$ %.2f para atingir o patrimônio ideal.\n", diferenca);
      printf("Você já conquistou %.2f%% da sua meta, continue investindo!\n", difPercentual);
      printf("\n");
    } else {
      printf("Parabéns, você já atingiu o patrimônio ideal para a sua idade!");
      printf("\n");
      return;
    }

  system("pause");
  return 0;

}