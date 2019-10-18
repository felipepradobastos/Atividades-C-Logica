#include <stdlib.h>
#include<stdio.h>

main(){
	int m[3][3], a0=0, a1=0, a2=0, l, c, vet[3];
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("Insira o valor para a matriz na linha %i e na coluna %i: ", l , c);
			scanf("%i", &m[l][c]);
		}
	}
	for(c=0;c<3;c++){
		for(l=0;l<3;l++){
			if(c==0){
				a0=a0+m[l][c];
			}
			if(c==1){
				a1=a1+m[l][c];
			}
			if(c==2){
				a2=a2+m[l][c];	
			}
		}
	}
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%i\t", m[l][c]);
		}printf("\n");
	}
	printf("\n");
	vet[0]=a0;
	vet[1]=a1;
	vet[2]=a2;
	for(l=0;l<3;l++){
		printf("%i	", vet[l]);
	}
}

