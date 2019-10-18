#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	int x, y, z;
	printf("Insira o valor de x \n");
	scanf("%i", &x);
	printf("Insira o valor de y \n");
	scanf("%i", &y);
	
	z=x+y;
	z=pow(z,2);
	printf("O Quadrado da soma e: %i", z);
	
	
	
}
