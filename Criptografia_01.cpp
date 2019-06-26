/*
	Name: Djalma L Oliveira
	Date: 01/03/19
	Descricao:
	5. Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, 
	que trocava cada letra pelo equivalente em duas posições à direita no alfabeto (por 
	exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao fim do alfabeto nós voltamos para o 
	começo, isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras com 
	quaisquer número de posições. A entrada contém vários casos de teste. A primeira 
	linha da entrada contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), 
	que é a sentença após ela ter sido codificada através desta Cifra de César modificada. 
	A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições 
	cada letra foi deslocada para a direita. Por exemplo, se a entrada da string for 
	"LIPPSASVPH" e o número de posições for 4, a saída será "HELLOWORLD", pois cada 
	caracter da entrada foi deslocado 4 posições antes.	
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main(){
	
	char frase[80] = "LIPPSASVPH";
	
	
	for (int i=0; i < strlen(frase);i++){		

		printf("\n%d letra: %d letra %c",i,strlen(frase),frase[i]);
	}
	printf("\n\n");
	
	
	for (int i=0; i < strlen(frase);i++){		

		printf("\n%d letra: %d original %c codigo %d",i,strlen(frase),frase[i],frase[i]);
	}
	
	

getch();


return 0;
}


