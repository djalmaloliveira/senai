/*
2. Fa�a uma aplica��o que receba do usu�rio uma frase. Identifique o tamanho da frase e imprima
esta frase tantas vezes quanto for a quantidade de caracteres. Ex: para a frase: �z� do povo�,
ela dever� aparecer 10 vezes na tela, pois tem 10 caracteres (incluindo espa�os).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char frase[80];
	int intTam;
	
	printf("Sistema de impressao de frases");
	printf("\n\n");
	printf("Informe uma frase: ");
	gets(frase);
	intTam = strlen(frase);
	printf("\nA frase informada eh: ");
	puts(frase);
	printf(" tamano da frase eh %d",intTam);
	
	for (int i=1;i<intTam+1;i++){
		printf("\n%d - Frase informada: ",i);
		puts(frase);
	}
	
	




	return 0;

}

