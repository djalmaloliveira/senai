/*
4. O superfatorial de um n�mero N � definida pelo produto dos N 
primeiros fatoriais de N. Assim, o superfatorial de 4 �
sf(4) = 1! * 2! * 3! * 4! = 288
Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo 
N e retorne o superfatorial desse n�mero.

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



