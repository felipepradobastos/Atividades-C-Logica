#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int x, cont, qtdivisores, divisores;
	printf("Insira um numero a seguir para ver os seus divisores;");
	scanf("%i", &x);
	cont=1;
	do{
		divisores=x%cont;
		qtdivisores=cont;
		if(divisores==0){
			printf("O numero %i e divisor de %i\n", qtdivisores, x);
		}
		cont++;
	}while(cont<=x);
}
	
