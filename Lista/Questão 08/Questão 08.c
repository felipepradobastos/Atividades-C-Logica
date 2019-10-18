#include <stdlib.h>
#include <stdio.h>

main(){
	int dd,mm,aa;
	printf("Informe o dia: \n");
	scanf("%i", &dd);
	printf("Informe o mes: \n");
	scanf("%i", &mm);
	printf("Informe o ano: \n");
	scanf("%i", &aa);
	
	printf("A data no formato dd/mm/aa e:%i/%i/%i\n", dd, mm, aa);
	printf("A data no formato aa/mm/dd e:%i/%i/%i", aa, mm, dd);
}
