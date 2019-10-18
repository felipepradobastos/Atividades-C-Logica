#include <stdlib.h>
#include <stdio.h>

main(){
	int m[3][3], vet[3], l, c, somac;
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("Insira o valor para a matriz na linha %i  na coluna %i: \n", l, c);
			scanf("%i", &m[l][c]);
		}
	}
	printf("\n");
	for(c=0;c<3;c++){
		somac=0;
		for(l=0;l<3;l++){
			somac=somac+m[l][c];
			vet[c]=somac;
		}
	}
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%i\t", m[l][c]);
		}printf("\n");
	}
	for(c=0;c<3;c++){
		printf("%i\t", vet[c]);
	}
}
