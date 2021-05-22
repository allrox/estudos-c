#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	//Defini��o do idioma para exibir acentua��o corretamente
	//Depende diretamente da linha 2 #include <locale.h>
	setlocale(LC_ALL, "Portuguese");

	//Define a precis�o dos valores do tipo float
	cout<<fixed<<setprecision(1);
	
	//Vari�veis do �ndice do vetor, contador e opera��es
	int ind, i;
	float val[ind], soma, media;

	cout<<"Nesta aplica��o voc� calcular� a m�dia aritm�tica de uma sequ�ncia de termos.\n";
	cout<<"-----------------------------------------------------------------------------\n";
	cout<<"\nQual � o n�mero de termos a serem avaliados? ";
	cin>>ind;
	i=ind;
	cout<<"\n";
	
	//Estrutura de repeti��o para alimentar o vetor
	for(ind=1;ind<=(i);ind++)
		{
		cout<<"Informe o "<<ind<<"� termo: ";
		cin>>val[ind];
		}
	
	//Estrutura de repeti��o para a soma dos valores
	for(ind=i;ind>=0;ind--)
		{
			soma+=val[ind];
		}
	
	//C�lculo da m�dia
	media = soma/i;
	
	cout<<"\nA soma dos "<<i<<" valores � "<<soma<<", e a m�dia � "<<media<<".\n";
	system("pause");

}
