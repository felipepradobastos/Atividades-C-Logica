#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int cfabrica, cfinal;
	printf("Insira o custo de fabrica do veiculo.")/
	scanf("%i", &cfabrica);
	
	if(cfabrica>=25000){
		cfinal=cfabrica*1.35;
		printf("O custo final e:%i", cfinal);
	}else{
		if(cfabrica>12000){
			cfinal=cfabrica*1.25;
			printf("O custo final e:%i", cfinal);
		}else{
			cfinal=cfabrica*1.05;
			printf("O custo final e:%i", cfinal);
		}
	}
}


