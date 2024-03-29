/*
4. Para o controle de veículos que circulam em uma determinada cidade, a
Secretaria dos Transportes criou um registro padrão de veiculos com as
seguintes informacoes:
    • Proprietario
    • Combustível (string - Alcool, diesel ou gasolina)
    • Modelo (string)
    • Cor (string)
    • Numero de chassi (inteiro)
    • Ano (inteiro)
    • Placa (3 primeiros valores alfabeticos e os 4 restantes numeros)
Construa um algoritmo que leia uma quantidade arbitraria de veiculos, que pode ser definido pelo usuário.
Em seguida:
a) Liste todos os proprietarios cujos carros sao do ano de 1980 ou posterior e que sejam movidos a diesel.
b) Liste todos os proprietarios cujos carros sao movidos a Alcool ou a gasolina e que sejam do ano de 2000 para cima.
c) Liste todos os veiculos cujas placas comecem com a letra 'A' e que o ultimo digito da placa seja um numero par.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int i,z,iQtd=3;
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

	

    for(i=1;i<iQtd;i++){    	
        printf("\nProprietario: ");
        scanf("%s:",carro[i].sProprietario);
        printf("\nCombustivel: a=Alcool, g=Gasolina, d=Diesel: ");
        scanf("%s:",carro[i].sCombustivel);

        if(carro[i].sCombustivel[0]!='a' && carro[i].sCombustivel[0]!='g' && carro[i].sCombustivel[0]!='d'){
           printf("\nO item escolhino nao eh reconhecido");
           printf("\nO programa ser� finalizado.");
           exit(0);
        }

        printf("\nModelo: ");
        scanf("%s:",carro[i].sModelo);
        printf("\nCor: ");
        scanf("%s:",carro[i].sCor);
        printf("\nNumero do chassi: ");
        scanf("%s:",&carro[i].iNumero_chassi);
        printf("\nAno: XXXX ");
        scanf("%s:",&carro[i].iAno);
    
        
        printf("\nPlaca: AAA-9999");
        scanf("%s:",&carro[i].sPlaca);
    }

    for(i=1;i<iQtd;i++){

        printf("\n************ Relacao de Todos os Carros ***********");
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
      
    for(i=1;i<iQtd;i++){
		if(carro[i].iAno > 1980 && carro[i].sCombustivel[0]!='d'){				
			printf("\n");
    		printf("\n************** Relacao de Todos os Carros > 1980 a Diessel*****************");
		    printf("\n"); 					
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
	}
    
      
    for(i=1;i<iQtd;i++){
		if(carro[i].iAno > 2000 && carro[i].sCombustivel[0]!='g'){
			printf("\n");
    		printf("\n************** Relacao de Todos os Carros > 2000 a Alcool ou a Gasolina *****************");
    		printf("\n");   			
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
	}
    
    
	//placas comecem com a letra 'A' e que o ultimo digito da placa seja um numero par    
      for(i=1;i<iQtd;i++){    	
      	
		if(carro[i].sPlaca[0] == 'A' && carro[i].sPlaca[0] == 'a' && carro[i].sPlaca[7]%2==0){
			printf("\n");
    		printf("\n***************** Relacao de Todos os Carros Placa comecem *****************");
    		printf("\n******************com a letra 'A' e que o ultimo digito da******************");
    		printf("\n**************************placa seja um numero par *************************");
    		
    		printf("\n");   			
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
	}  

    printf("\n\n");



    return 0;
}


