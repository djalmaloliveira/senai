#include <stdio.h>

float Potencia(float base, int exp) {
	float pot = 1;
	if (exp>=0) {
		while (exp>0) {
			pot = pot * base;
			exp = exp - 1;
		}
	}
	else {
		while (exp<0) {
			pot = pot * base;
			exp = exp + 1;
		}
		pot = 1/pot;
	}
	return pot;
}

float PotenciaRecursiva(float base, int exp) {
	if (exp>=0) {
		if (exp==0) return 1;
		else return base*PotenciaRecursiva(base,exp-1);
	}
	else {
		return 1/(base*PotenciaRecursiva(base,-exp-1));
	}
}


main() {
	float b; // Valor da base
	int e; // Expoente
	scanf("%f %d", &b, &e);
	printf("%f", PotenciaRecursiva(b,e));	
}



