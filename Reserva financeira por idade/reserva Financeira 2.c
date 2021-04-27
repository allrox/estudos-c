#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Portuguese_Brazil");
  system("cls");
  
  long int idade;
  long int renda = 50000;
  long int patrHoje;
  
  printf("Esta aplica��o calcula o patrim�nio ideal para a sua idade,\nseguindo o m�todo de Thomas J. Stanley e William D. Danko.\n\n");
  
  printf("Qual � a sua idade atual? ");
  scanf("%ld", &idade);

  printf("Qual � a sua renda bruta anual? ");
  scanf("%ld", &renda);
  printf("\n");

  float patrIdeal = (idade*renda)/10;

  printf("O patrim�nio ideal para sua idade � R$ %.2f\n", patrIdeal);
  printf("\n");
  printf("Qual � o seu patrim�nio atual? ");
  scanf("%ld", &patrHoje);

    if (patrHoje < patrIdeal) {
      float diferenca = patrIdeal - patrHoje;
      float difPercentual = (diferenca / patrIdeal)*100;
      printf("Voc� ainda precisa de R$ %.2f para aingir o patrim�nio ideal.\n", diferenca);
      printf("Continue investindo, faltam %.2f porcento.\n", difPercentual);
      printf("\n");
    } else {
      printf("Parab�ns, voc� j� atingiu o patrim�nio ideal para a sua idade!");
      printf("\n");
      return;
    }

  system("pause");
  return 0;

}