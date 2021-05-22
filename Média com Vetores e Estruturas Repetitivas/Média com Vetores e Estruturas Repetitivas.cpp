#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	//Definição do idioma para exibir acentuação corretamente
	//Depende diretamente da linha 2 #include <locale.h>
	setlocale(LC_ALL, "Portuguese");

	//Define a precisão dos valores do tipo float
	cout<<fixed<<setprecision(1);
	
	//Variáveis do índice do vetor, contador e operações
	int ind, i;
	float val[ind], soma, media;

	cout<<"Nesta aplicação você calculará a média aritmética de uma sequência de termos.\n";
	cout<<"-----------------------------------------------------------------------------\n";
	cout<<"\nQual é o número de termos a serem avaliados? ";
	cin>>ind;
	i=ind;
	cout<<"\n";
	
	//Estrutura de repetição para alimentar o vetor
	for(ind=1;ind<=(i);ind++)
		{
		cout<<"Informe o "<<ind<<"º termo: ";
		cin>>val[ind];
		}
	
	//Estrutura de repetição para a soma dos valores
	for(ind=i;ind>=0;ind--)
		{
			soma+=val[ind];
		}
	
	//Cálculo da média
	media = soma/i;
	
	cout<<"\nA soma dos "<<i<<" valores é "<<soma<<", e a média é "<<media<<".\n";
	system("pause");

}
