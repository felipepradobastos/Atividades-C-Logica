#include<stdlib.h>
#include<stdio.h>

main(){
	int m1[4][4], m2[4][4], i, j, mr[4][4];
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Insira os valores para a primeira matriz na linha %i e na coluna %i: ", i, j);
			scanf("%i", &m1[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Insira os valores para a segunda matriz na linha %i e na coluna %i: ", i, j);
			scanf("%i", &m2[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(m1[i][j]>m2[i][j]){
				mr[i][j]=m1[i][j];
			}else{
				mr[i][j]=m2[i][j];
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t", m1[i][j]);
		}printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t", m2[i][j]);
		}printf("\n");
	}
	printf("\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t", mr[i][j]);
		}printf("\n");
	}
}
