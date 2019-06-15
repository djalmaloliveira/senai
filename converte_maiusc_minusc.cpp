#include <stdio.h>
#include <string.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	char texto[200];
	int i=0;
	char op;
	
	gets(texto);
	
	printf("Digite 1 para converter minúsculo-maiúsculo e 2 para converter maiúsculo-minúsculo: ");
	op = getchar();
	
	switch (op) {
		case '1':
			/* Converte minúscula para maiúscula.   */
			for (i=0; i<strlen(texto); i++) {
				// 97 a 122 é o código ASCII das letras de a-z (minúsculas)
				if (texto[i]>=97 && texto[i]<=122)
					texto[i] = texto[i] - 32; // Converte para maiúscula
			}
			break;
		
		case '2':
			/* Converte maiúscula para minúscula. */
			for (i=0; i<strlen(texto); i++) {
				// 65 a 90 é o código ASCII das letras de A-Z (maiúsculas)
				if (texto[i]>=65 && texto[i]<=90)
					texto[i] = texto[i] + 32;
			}
			break;
	}

	puts("\n");
	puts(texto);

}
