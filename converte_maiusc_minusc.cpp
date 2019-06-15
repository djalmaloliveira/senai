#include <stdio.h>
#include <string.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	char texto[200];
	int i=0;
	char op;
	
	gets(texto);
	
	printf("Digite 1 para converter min�sculo-mai�sculo e 2 para converter mai�sculo-min�sculo: ");
	op = getchar();
	
	switch (op) {
		case '1':
			/* Converte min�scula para mai�scula.   */
			for (i=0; i<strlen(texto); i++) {
				// 97 a 122 � o c�digo ASCII das letras de a-z (min�sculas)
				if (texto[i]>=97 && texto[i]<=122)
					texto[i] = texto[i] - 32; // Converte para mai�scula
			}
			break;
		
		case '2':
			/* Converte mai�scula para min�scula. */
			for (i=0; i<strlen(texto); i++) {
				// 65 a 90 � o c�digo ASCII das letras de A-Z (mai�sculas)
				if (texto[i]>=65 && texto[i]<=90)
					texto[i] = texto[i] + 32;
			}
			break;
	}

	puts("\n");
	puts(texto);

}
