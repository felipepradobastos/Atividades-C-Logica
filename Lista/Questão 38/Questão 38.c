#include <stdlib.h>
#include <stdio.h>

main(){
	int m[2][3], mt[2][3],i ,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("O valor da matriz na linha %i e na coluna %i: ", i, j);
			scanf("%i",  &m[i][j]);
		}
	}
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%i\t",  m[i][j]);
		}printf("\n");
	}
	printf("\n\n");
	for(j=0;j<3;j++){
		for(i=0;i<2;i++){
			printf("%i\t",  m[i][j]);
		}printf("\n");
	}
	
}
