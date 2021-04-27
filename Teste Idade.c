#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"Portuguese_Brazil");
  system("cls");

  int anoNasc;
  int anoAtual;
  int idade;

  printf("Esta aplicação é um teste básico com uma operação matemática simples.\n");
  printf("\n");

  printf("Informe o ano atual: ");
  scanf("%d", &anoAtual);
  printf("Qual o ano do seu nascimento? ");
  scanf("%d", &anoNasc);

  idade = (anoAtual-anoNasc);

  printf("***********************************************\n");
  printf("Em %d, você completa ou completou %d anos.\n", anoAtual, idade);
  printf("***********************************************\n");
  
  system("pause");
  
}