#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[4][4], b[4][4], soma[4][4], i, j;

main(){
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Insira o valor para primeira matriz linha %i, e coluna %i:\n", i, j);
			scanf("%i", &a[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Insira o valor para segunda matriz linha %i, e coluna %i:\n", i , j);
			scanf("%i", &b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t", a[i][j]);
		}printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t", b[i][j]);
		}printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			soma[i][j]=a[i][j]+b[i][j];
			printf("%i\t", soma[i][j]);
		}printf("\n");
	}

}
