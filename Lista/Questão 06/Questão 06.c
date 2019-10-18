include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){
	int valor1,troca,valor2;
	printf("Por gentileza insira o primeiro valor: \n");
	scanf("%i", &valor1);
	printf("Por gentileza insira o segundo valor: \n");
	scanf("%i", &valor2);
	
	troca=valor1;
	valor1=valor2;
	valor2=troca;
	
	printf("Os valores invertidos são Valor 1= %i e Valor 2= %i", valor1, valor2);
	
	
	
	
}
