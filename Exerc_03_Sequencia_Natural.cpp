/*
	Name: Djalma L Oliveira
	Date: 01/03/19
	Descricao:
	3. Fa�a uma fun��o recursiva que receba um n�mero 
	inteiro positivo N e imprima todos os n�meros naturais 
	de 0 at� N em ordem crescente.
*/
#include <stdio.h>
#include <stdlib.h>

void imprimeSeq(int num){
	int c=0;
	while(c <= num){
		printf("\n%d",c);
		c++;
	}
}

int main(){
	int num;
	
	printf("\n\nInforme o primeiro numero da sequencia: \n");
	scanf("%d",&num);
	imprimeSeq(num);

	return 0;
}


