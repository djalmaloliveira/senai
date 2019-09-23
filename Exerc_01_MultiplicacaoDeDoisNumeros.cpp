/*
	Name: Djalma L Oliveira
	Date: 20/09/19
	Descricao:
	1. A multiplicação de dois números inteiros pode ser 
	feita através de somas sucessivas. Proponha um algoritmo 
	recursivo Multip_Rec(n1,n2) que calcule a multiplicação 
	de dois inteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int multiplicar(int x1,int x2){
	printf("\nx1  eh: %d e x2 eh: %d",x1,x2);
	int res=0;
	while(x2>=1){
		res = res+x1;;
		x2--;
		printf("\n%d",x2);
	}
	return res;
	
}

int main(){

	int x1, x2;
	
	printf("\n\nInforme os 2 numeros para serem multiplicados: \n");
	scanf("%d %d",&x1, &x2);	
	printf("\nA multiplicacao eh : %d",multiplicar(x1,x2));

	return 0;
}


