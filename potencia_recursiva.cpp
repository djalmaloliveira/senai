#include <stdio.h>

int Potencia(int base, int exp) {
	if (exp==0) return 1;
	else if (exp>0) {
		return base * Potencia(base, exp-1);
	}
}

main() {
	int b, e;
	scanf("%d %d", &b, &e);
	printf("%d", Potencia(b,e));	
}



