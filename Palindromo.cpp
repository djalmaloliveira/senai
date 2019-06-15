#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[100];
	int tamanho;
	int esq, dir;
	int qtd_igual = 0;
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	tamanho = strlen(palavra);
	
	for (esq=0, dir=tamanho-1; esq<tamanho/2; esq++, dir--) {
		if (palavra[esq]==palavra[dir]) {
			qtd_igual++;
		}
	}
	
	printf("Quantidade de pares iguais: %d\n", qtd_igual);
	
	if (qtd_igual == tamanho/2) {
		printf("A palavra %s é palíndroma.\n", palavra);
	}
	else {
		printf("A palavra %s não é palíndroma.\n", palavra);
	}
	
}



