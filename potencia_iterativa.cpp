#include <stdio.h>

int Potencia(int base, int exp) {
	int pot = 1;
	while (exp>0) {
		pot = pot * base;
		exp = exp - 1;
	}
	return pot;
}

main() {
	int b, e;
	scanf("%d %d", &b, &e);
	printf("%d", Potencia(b,e));	
}



