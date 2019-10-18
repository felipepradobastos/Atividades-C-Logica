#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float pfab, pfinal;
main(){
	printf("Informe o valor do custo de fabrica do carro a seguir:\n");
	scanf("%f", &pfab);
	
	pfinal=pfab*1.73;
	
	printf("O valor final do carro para o consumidor e: %f", pfinal);
}
