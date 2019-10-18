#include <stdlib.h>
#include <stdio.h>

main(){
	int x, cont, numexatas=0,resto;
	printf("Insira um numero para descobrir se ele e primo:");
	scanf("%i", &x);
	cont=1;
	do{
		resto=x%cont;
		if(resto==0){
			numexatas++;
		}
		cont++;
	}while(cont<=x);
	if(numexatas==2){
		printf("O numero %i e primo", x);
	}else{
		printf("O numero %i nao e primo", x);
	}
}
