/*
5. J�lio C�sar usava um sistema de criptografia, agora conhecido como Cifra de C�sar, que
trocava cada letra pelo equivalente em duas posi��es � direita no alfabeto (por exemplo, 'A'
vira 'C', 'R' vira 'T', etc.). Ao fim do alfabeto n�s voltamos para o come�o, isto � 'Y' vira 'A'. N�s
podemos, � claro, tentar trocar as letras com quaisquer n�mero de posi��es. A entrada cont�m
v�rios casos de teste. A primeira linha da entrada cont�m uma string com at� 50 caracteres
mai�sculos ('A'-'Z'), que � a senten�a ap�s ela ter sido codificada atrav�s desta Cifra de C�sar
modificada. A segunda linha cont�m um n�mero que varia de 0 a 25 e que representa quantas
posi��es cada letra foi deslocada para a direita. Por exemplo, se a entrada da string for
"LIPPSASVPH" e o n�mero de posi��es for 4, a sa�da ser� "HELLOWORLD", pois cada caracter
da entrada foi deslocado 4 posi��es antes.
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
		
		if (frase[i]-4<=65) correcao = 24;
		
		printf("\n%d - Original: ++%c++ Encripto ++%c++" ,i,frase[i],frase[i]+correcao);	

	
		
		
	}

	return 0;

}

