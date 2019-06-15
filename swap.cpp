#include <stdio.h>

main() {
	int x=10;
	int y=20;
	int tmp;
	
	tmp = x;
	x = y;
	y = tmp;
	
	printf("x = %d, y = %d\n", x, y);
	
}
