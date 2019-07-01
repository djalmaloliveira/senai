/*
4. Para o controle de veículos que circulam em uma determinada cidade, a
Secretaria dos Transportes criou um registro padrão de veículos com as
seguintes informações:
    • Proprietário
    • Combustível (string - álcool, diesel ou gasolina)
    • Modelo (string)
    • Cor (string)
    • Número de chassi (inteiro)
    • Ano (inteiro)
    • Placa (3 primeiros valores alfabéticos e os 4 restantes números)
Construa um algoritmo que leia uma quantidade arbitrária de veículos, que pode ser definido pelo usuário.
Em seguida:
a) Liste todos os proprietários cujos carros são do ano de 1980 ou posterior e que sejam movidos a diesel.
b) Liste todos os proprietários cujos carros são movidos a álcool ou a gasolina e que sejam do ano de 2000 para cima.
c) Liste todos os veículos cujas placas comecem com a letra 'A' e que o último dígito da placa seja um número par.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int iQtd=3;
    float iMediaAltura = 0;
    printf("\n\n **** Sistema de Registro de Carros - V.01 **** ");
    printf("\n\nInforme quantos carros serao adicionados: ");
    //scanf("%d",&iQtd);

    struct ficha_de_carro{
        char sProprietario[50];
        char sCombustivel[50]; // álcool, diesel ou gasolina)s
        char sModelo[50];
        char sCor[50];
        int iNumero_chassi;
        int iAno;
        char sPlaca[50];//  (3 primeiros valores alfabéticos e os 4 restantes números)
    };
    struct ficha_de_carro carro[iQtd];

    for (int i=1;i<iQtd;i++){
        printf("\nProprietario: ");
        scanf("%s:",carro[i].sProprietario);
        printf("\nCombustivel: a=Alcool, g=Gasolina, d=Diesel: ");
        scanf("%s:",carro[i].sCombustivel);
/*
        if(carro[i].sCombustivel[0]!='a'){
            printf("\n2Combustivel escolhido %s", carro[i].sCombustivel);
            printf("\n\n3O item escolhino nao eh reconhecido");
            exit(0);
        }*/

/*        if((carro[i].sCombustivel[0]!='a')||(carro[i].sCombustivel[0]!='g')||(carro[i].sCombustivel[0]!='d')){
           printf("O item escolhino nao eh reconhecido");
           exit(0);
        }*/



        if(carro[i].sCombustivel[0]!='a'||carro[i].sCombustivel[0]!='g'){
           printf("O item escolhino nao eh reconhecido");
           exit(0);
        }




        printf("\nModelo: ");
        scanf("%s:",carro[i].sModelo);
        printf("\nCor: ");
        scanf("%s:",carro[i].sCor);
        printf("\nNumero do chassi: ");
        scanf("%s:",&carro[i].iNumero_chassi);
        printf("\nAno: ");
        scanf("%s:",&carro[i].iAno);
        printf("\nPlaca: ");
        scanf("%s:",&carro[i].sPlaca);
    }

    for (int i=1;i<iQtd;i++){

        printf("\n************ Relacao de Carros ***********");
        printf("\n%d - Propriet.: (%s), Comb.:(%s), Modelo: (%s), Cor: (%s), Chassi: (%d), Ano:(%d), Pacla:((%s) ",i,
        carro[i].sProprietario,
        carro[i].sCombustivel,
        carro[i].sModelo,
        carro[i].sCor,
        carro[i].iNumero_chassi,
        carro[i].iAno,
        carro[i].sPlaca
        );


    }

    printf("\n\n");



    return 0;
}


