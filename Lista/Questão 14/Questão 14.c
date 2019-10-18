#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int productcode;
	float divida, quant;
	printf("Por favor insira o codigo do produto:")/
	scanf("%i", &productcode);
	printf("Insira a quantidade:");
	scanf("%f", &quant);
	
	switch(productcode)
	{
		case 1001:
		divida=5.32*quant;
		break;
		
		case 1324:
		divida=6.45*quant;
		break;
		
		case 6548:
		divida=2.37	*quant;
		break;	
		
		case 987:
		divida=5.32*quant;
		break;
		
		case 7623:
		divida=6.45*quant;
		break;
	}
	printf("O valor da divida e:%f", divida);
}
	
	
	
	


