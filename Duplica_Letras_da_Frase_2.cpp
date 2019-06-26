/*
4. Crie um programa que recebe uma string como entrada e duplique cada letra desta palavra.
Por exemplo: se o usuário digitar a palavra "LONDRINA“, a saída deverá ser
"LLOONNDDRRIINNAA“.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,j,inttam; 
    char frase[100],conversao[100]; 
    
    
    
    printf("Sistema que duplica cada letra da frase");
	printf("\n\n");
	printf("Informe a frase a ser duplicada: ");
	gets(frase);
	printf("\n\n");
    

   	inttam = strlen(frase); 
    
    for ( i=0,j=0;i <= inttam; i++) 
    {
        conversao[j]=frase; 
        conversao[j+1]=frase; 
        j=j+2; 
               
    }
    
    printf("A palavra modificada e: %s",conversao); 
    
}

