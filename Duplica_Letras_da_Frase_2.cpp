/*
4. Crie um programa que recebe uma string como entrada e duplique cada letra desta palavra.
Por exemplo: se o usu�rio digitar a palavra "LONDRINA�, a sa�da dever� ser
"LLOONNDDRRIINNAA�.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,j,inttam; 
    char frase[100],conversao[100]; // declara��o de vetores
    
    
    
    printf("Sistema que duplica cada letra da frase");
	printf("\n\n");
	printf("Informe a frase a ser duplicada: ");
	gets(frase);
	printf("\n\n");
    

   	inttam = strlen(frase); 
    
    for ( i=0,j=0;i <= inttam; i++) 
    {
        conversao[j]=frase; // conversao na posicao j recebendo frase na posicao i
        conversao[j+1]=frase; // conversao na posicao j+1 recebendo frase na posicao i novamente.
        j=j+2; 
               
    }
    
    printf("A palavra modificada e: %s",conversao); 
    
}

