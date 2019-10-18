#include <stdlib.h>
#include <stdio.h>

int b, h,r;
main(){
	printf("Por favor insira a base do triangulo: \n");
	scanf("%i", &b);
	printf("Por favor insira a altura do triangulo: \n");
	scanf("%i", &h);
	r=b*h;
	printf("A area do triangulo e: %i \n", r);
}
