/*
	Name: Djalma L Oliveira
	Date: 01/03/19
	Descricao:
	2. Faça uma função recursiva que receba como parâmetro 2 números 
	inteiros x e y e em seguida calcule e retorne o MDC 
	(Máximo Divisor Comum) entre x e y. O máximo divisor 
	comum dos inteiros x e y é o maior inteiro que é 
	divisível por x e y.
*/
#include <stdio.h>
#include <stdlib.h>

int calculaMDC(int x1, int x2){

int a, b, p, limite, primo = 2, mdc = 1;

	a = x1; b= x2;

       while (a != 1 && b != 1)
       {
           if (a % primo == 0)
           {
               a = a / primo;
               if (b % primo == 0)
               {
                   b = b / primo;
                   mdc = mdc * primo;
               }
           }
           else
               if (b % primo == 0) b = b / primo;
               else         // achar proximo primo
                   if (primo == 2) primo = 3;
                   else
                       do
                       {
                           primo = primo + 2;
                           p = 1;
                           limite = primo / 2;
                           do
                           {
                               p = p + 2;
                           }
                           while (primo % p != 0 && p < limite);
                       }
                       while (primo % p == 0);
       }
       printf("%d\n", mdc);


}

int main(){
	int x1, x2;
	
	printf("\n\nInforme os 2 numeros para calculo do MDC: \n");
	scanf("%d %d",&x1, &x2);
	printf("\nO MDC eh : ",calculaMDC(x1,x2));

	return 0;
}


