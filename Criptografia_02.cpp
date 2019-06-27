/*
5. Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que
trocava cada letra pelo equivalente em duas posições à direita no alfabeto (por exemplo, 'A'
vira 'C', 'R' vira 'T', etc.). Ao fim do alfabeto nós voltamos para o começo, isto e 'Y' vira 'A'. Nós
podemos, eh claro, tentar trocar as letras com quaisquer número de posições. A entrada contém
vários casos de teste. A primeira linha da entrada contem uma string com ate 50 caracteres
maiúsculos ('A'-'Z'), que é a sentença após ela ter sido codificada atraves desta Cifra de César
modificada. A segunda linha contem um numero que varia de 0 a 25 e que representa quantas
posições cada letra foi deslocada para a direita. Por exemplo, se a entrada da string for
"LIPPSASVPH" e o numero de posições for 4, a sai�da será "HELLOWORLD", pois cada caracter
da entrada foi deslocado 4 posições antes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

	char frase[80]="LIPPSASVPH";	
	char teste[80]="HELLOWORLD";
	
	int correcao = -4;
	
	printf("Valor do primeiro caracter: =%c=",teste[1]);

	printf("\n\n");

	printf("\nFrase original: ==%s==",frase);
	printf("\nFrase original: ==%s==",teste);
	printf("\n\n");
	for (int i=0;i<(strlen(frase));i++){
		
		if ((frase[i]=='A') || (frase[i]=='B')|| (frase[i]=='C')){			
			correcao = 21;			
		} else 		{
			correcao = -4;					
		}
		
		//printf("\n%d - Original: ++%c++ Encripto ++%c++" ,i,frase[i],frase[i]+correcao);
		printf("++%c++",frase[i]);	
	
	}
	
	printf("\n\n");
	
	for (int i=0;i<(strlen(frase));i++){
		
		if ((frase[i]=='A') || (frase[i]=='B')|| (frase[i]=='C')){			
			correcao = 22;			
		} else 		{
			correcao = -4;					
		}
		
		printf("++%c++",frase[i]+correcao);
		
	}
	
	
	
	
	

	return 0;

}

