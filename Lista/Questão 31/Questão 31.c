#include<stdlib.h>
#include<stdio.h>

main(){
	int vet[15], i, j;
	
	for(i=0;i<=14;i++){
		printf("Insira um valor para o vetor na posicao %i: \n", i);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<15-1;i++){
		for(j=i+1; j<15; j++){
			if(vet[i]==vet[j]){
				printf("O valor da posicao %i e igual a da posicao %i\n", i, j);
			}
		}
	}
}
