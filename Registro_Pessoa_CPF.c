fabio.matsunaga@sistemafiep.org.br

/*
2. Considere o seguinte modelo de registro que representa uma pessoa:
•  Nome (string)
•  Data de nascimento (registro do tipo 'Data' – possui dia, mês e ano)
•  CPF (string – somente dígitos numéricos)
Crie um registro do tipo acima. Os campos nome e CPF são do tipo string. A data de nascimento é
um outro registro do tipo Data (dia, mês e ano) a ser definido também. Em seguida, crie um algoritmo
para calcular a idade da pessoa de acordo com sua data de nascimento. Crie um algoritmo também
para validar o CPF da pessoa (um CPF válido neste caso é se o seu tamanho é igual a 11 e se existem
somente números na string).*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int validarCPF(char cpf[])
{
    int i, j, digito1 = 0, digito2 = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0; ///se o CPF tiver todos os números iguais ele é inválido.
    else
    {
        ///digito 1---------------------------------------------------
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) ///multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        digito1 %= 11;
        if(digito1 < 2)
            digito1 = 0;
        else
            digito1 = 11 - digito1;
        if((cpf[9]-48) != digito1)
            return 0; ///se o digito 1 não for o mesmo que o da validação CPF é inválido
        else
        ///digito 2--------------------------------------------------
        {
        for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) ///multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                    digito2 += (cpf[i]-48) * j;
        digito2 %= 11;
        if(digito2 < 2)
            digito2 = 0;
        else
            digito2 = 11 - digito2;
        if((cpf[10]-48) != digito2)
            return 0; ///se o digito 2 não for o mesmo que o da validação CPF é inválido
        }
    }
    return 1;
}


main() {

    int tmp, temp2, dia, mes, ano, idade,icpf;
    char d[50], p[50],c[50], cano[50];


    struct Pessoa {
        char nome[50];
        char datanasc[50];
        char cpf[50];
    };

	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
  	data_hora_atual = localtime(&segundos);

	struct Pessoa pes; // Declaração de uma variável do tipo do registro definido

	printf("\nInforme seu nome: ");
	scanf("%s: ",p);
	printf("\nInforme data nascimento: dd mm aaaa ");
	scanf("%d %d %d: ",&dia, &mes, &ano);
	printf("\nInforme seu cpf: ");
	scanf("%s: ",&c);

    icpf = validarCPF(c) ;

    if (icpf!=1){
            printf("\nNumero do CPF esta com erro!");
            printf("A aplicacao será fechada");
            exit(0);
            printf("\n\n");
        }

	idade = ( (data_hora_atual->tm_year+1900) - ano );

	strcpy(pes.nome,p);
	strcpy(pes.datanasc,d);
	strcpy(pes.cpf,c);

	printf("\n\n");
	printf("\nPessoa: %s", pes.nome);
	printf("\nData Nascimento: %d/%d/%d",dia,mes,ano);	
	printf("\nCPF:%s", pes.cpf);
	printf("\nIdade : %d",idade);

	printf("\n\n");
}
