/*
1. Fa�a um programa que pe�a para um usu�rio digitar o login e uma senha. O usu�rio poder�
entrar no sistema somente se o login e a senha corresponderem. O login deve ser "admin� e
a senha "1234�. Se o login e a senha corresponderem, mostre uma mensagem aleat�ria para
o usu�rio. Caso contr�rio, mostre uma mensagem de erro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	
	char user[20],senha[20];
	char user2[20] ,senha2[20]= "1234";

	printf("Sistema de Login");
	printf("\n\n");
	
	printf("Login:");
	gets(user);
	printf("Senhas: ");
	gets(senha);
	
	printf("\n\nUsario logado: %s do sistema %s",user, user2);
	printf("\n\n");
	
	if (!strcmp(senha,senha2)){
		printf("\n%s Eh igual a %s",senha,senha2);
	}else{
		printf("\n%s Eh diferente de %s",senha,senha2);
	}


	return 0;

}

