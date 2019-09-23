#include <stdio.h> 

int SomaVetor(int v[], int n) {
	int soma = 0;
	for (int i=0; i<n; i++) {
		soma += v[i]; //soma = soma + v[i];
	}
	return soma;
}

int SomaVetorRec(int v[], int n) {
	if (n==1) return v[0];
	else {
		return v[n-1] + SomaVetorRec(v, n-1);
	}
}

main() {
	int v[5] = {2, 3, 5, 1, 7};
	printf("SOMA: %d\n", SomaVetorRec(v,5));
}
