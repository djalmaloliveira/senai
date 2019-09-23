/*
4. O superfatorial de um número N é definida pelo produto dos N 
primeiros fatoriais de N. Assim, o superfatorial de 4 é
sf(4) = 1! * 2! * 3! * 4! = 288
Faça uma função recursiva que receba um número inteiro positivo 
N e retorne o superfatorial desse número.

*/


#include <stdio.h>

int Fatorial(int n) {
	int F = 1;
	while (n>1) {
		F = F * n;
		n = n - 1;
	}
	return F;
}

main() {
	int fat;
	scanf("%d", &fat);
	printf("%d", Fatorial(fat));	
}



