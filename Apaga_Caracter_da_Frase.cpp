/*
3. Crie um programa que recebe uma string e um caractere, e apague todas as ocorrências
desses caractere na string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char frase[80],frase2[80], caract[10], caracter[10];
	
	printf("Sistema que apaga todas as ocorrecias do caracterna string");
	printf("\n\n");
	
	printf("Informe um Frase: ");
	gets(frase);
	printf("Informe um Caracter para ser apagado: ");
	gets(caracter);
	printf("\n\n");
	printf("A frase fornecida eh: %s, o caracter a ser apagado eh: %s",frase,caracter);

	for(int i=0;i<(strlen(frase));i++){
		printf("\n%d - linhas",i);
		
		if(frase[i]!=caracter[0]){
			printf("\nFoi encontrado um caractare");
			strcat(frase2,frase);
		
		}
		printf("\nA nova frase %s",frase2);
	}

	return 0;

}

