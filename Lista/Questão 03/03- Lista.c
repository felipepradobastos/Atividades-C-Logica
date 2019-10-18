#include <stdlib.h>
#include <stdio.h>

float eleitores, nulos, brancos, validos, percnulos, percbrancos, percvalidos;
main(){
	printf("Insira a quantidade de eleitores do seu municipio \n");
	scanf("%f", &eleitores);
	printf("Insira a quantidade de votos Nulos\n");
	scanf("%f", &nulos);
	printf("Insira a quantidade de votos Brancos \n");
	scanf("%f", &brancos);
	printf("Insira a quantidade de votos Validos \n");
	scanf("%f", &validos);
	
	percnulos=(nulos/eleitores)*100;
	percbrancos=(brancos/eleitores)*100;
	percvalidos=(validos/eleitores)*100;
	
	printf("A porcentagem de votos Nulos, Brancos e Validos, Respectivamente sao: \n");
	printf("Porcentagem de Nulos: %f \n", percnulos);
	printf("Porcentagem de Brancos %f\n", percbrancos);
	printf("Porcentagem de Validos %f \n", percvalidos);
}
	
	
	
