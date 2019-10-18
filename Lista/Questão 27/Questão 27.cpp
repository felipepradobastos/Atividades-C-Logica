#include <stdio.h>
#include <stdlib.h>

/*main(){
	int x, soma=0, quant=0, result;
	printf("Insira numeros para calcular a media artmetica digite 0 para encerrar: \n");
	do{
		scanf("%i", &x);
		soma=soma+x;
		if(x!=0){
			quant=quant+1;
		}
	}while(x!=0);
result=soma/quant;
printf("O resultado e:%i", result);	
}*/


main(){
	int x, y, soma=0, quant=0, result;
	printf("Insira valores para x:");
	scanf("%i", &x);
	while(x!=0){
		soma=soma+x;
		quant=quant+1;
		printf("Insira valores para x:");
		scanf("%i", &x);
		}
	result=soma/quant;
	printf("O resultado e:%i", result);
		
}



