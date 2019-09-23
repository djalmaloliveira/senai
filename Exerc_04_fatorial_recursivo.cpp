/*
4. O superfatorial de um número N é definida pelo produto dos N 
primeiros fatoriais de N. Assim, o superfatorial de 4 é
sf(4) = 1! * 2! * 3! * 4! = 288
Faça uma função recursiva que receba um número inteiro positivo 
N e retorne o superfatorial desse número.

*/

#include <stdio.h>

/* Versão recursiva da função
de calcular fatorial. */
int Fatorial(int n) {
	if (n==1) return 1;
	else {
		return n*Fatorial(n-1);
	}
}

main() {
	int num;
	printf("Entrada: ");
	scanf("%d", &num);
	printf("Saida: %d", Fatorial(num));	
}



