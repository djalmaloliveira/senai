
/*3. Considere o seguinte modelo de registro que representa uma pessoa:
    • Nome (string)
    • Idade (int)
    • Altura (float)
Crie um programa em que o usuário forneça dados de 5 pessoas de
acordo com os dados acima e armazene em um vetor de registros.
Logo em seguida, crie um algoritmo que percorra o vetor de
registros e faça o seguinte:
a) Imprima os dados de todas as pessoas que tem mais de 18 anos.
b) Calcule e imprima a média da altura de todas as pessoas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iQtd = 3;
    float iMediaAltura = 0;

    struct ficha_de_pessoas{
            char nome[50];
            int idade;
            float altura;
     };
    struct ficha_de_pessoas pessoa[10];

    for (int i=1;i<iQtd;i++){

        printf("\nInforme o nome da pessoa: ");
        scanf("%s",pessoa[i].nome);

        printf("\nInforme a idade: ");
        scanf("%d",&pessoa[i].idade);

        printf("\nInforme a altura: ");
        scanf("%f",&pessoa[i].altura);

        iMediaAltura = iMediaAltura + pessoa[i].altura;
    }
    iMediaAltura = iMediaAltura/(iQtd - 1);

    for (int i=1;i<iQtd;i++){
        if(pessoa[i].idade>18){
            printf("\nPessoas com mais de 18 anos:");
            printf("\n%d - Pessoa: %s tem %d anos e %0.2f de altura ",i,pessoa[i].nome,pessoa[i].idade,pessoa[i].altura);
        }

    }
    printf("\n\nMedia da altura eh: %.2f",iMediaAltura);
    printf("\n\n");



    return 0;
}
