
/*
	Name: Djalma L Oliveira
	Date: 01/03/19
	Descricao:
	6.Faça uma função recursiva que permita calcular  
	a média um vetor de tamanho N.
*/

#include <stdio.h>
/*
int Potencia(int base, int exp) {
	if (exp==0) return 1;
	else if (exp>0) {
		return base * Potencia(base, exp-1);
	}
}
*/
int MediaVetor(int base, int ind) {
	if (ind==0) return 1;
	
	else if (exp>0) {
		return (base + MediaVetor(base, ind-1)/ind;
	}
}

main() {
	int b, e;
	vet[]={1,3,4,5};
	printf("\n\nCalcula media do vetor");
	
	scanf("%d %d", &b, &e);
	printf("%d", MediaVetor(b,e));	
}



