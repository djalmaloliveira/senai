#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	int codigo_ascii;
	
	printf("C�digo ASCII: ");
	scanf("%d", &codigo_ascii);
	
	printf("%c", codigo_ascii);
	
	
	
}
