#include <stdio.h>
#include <string.h>

main() {
	
	char palavra[50];
	char tmp;
	int i, j, tam;
	
	printf("DIGITE UMA PALAVRA: ");
	gets(palavra);
	
	tam = strlen(palavra);
	for (i=0, j=tam-1; i<tam/2; i++,j--) {
		tmp = palavra[i];
		palavra[i] = palavra[j];
		palavra[j] = tmp;
	}
	printf("PALAVRA INVERTIDA: %s\n", palavra);
	
}
