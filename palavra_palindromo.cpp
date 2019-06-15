#include <stdio.h>
#include <string.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[50], palavra_invertida[50];
	char tmp;
	int i, j, tam;
	
	printf("DIGITE UMA PALAVRA: ");
	gets(palavra);
	
	strcpy(palavra_invertida, palavra); 
	
	tam = strlen(palavra_invertida);
	for (i=0, j=tam-1; i<tam/2; i++,j--) {
		tmp = palavra_invertida[i];
		palavra_invertida[i] = palavra_invertida[j];
		palavra_invertida[j] = tmp;
	}
	printf("PALAVRA INVERTIDA: %s\n", palavra_invertida);
	
	if (!strcmp(palavra, palavra_invertida)) {
		printf("\n * A PALAVRA %s É PALÍNDROMA", palavra);
	}
	else {
		printf("\n * A PALAVRA %s NÃO É PALÍNDROMA", palavra);
	}
	
	
}
