#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
int calcpares(int vet[10]){
	int i, cont=0;
	for(i=0;i<10;i++){
		if(vet[i]%2==0){
			cont++;
		}
	}
	return cont;
}
main(){
	int v[10], i, tpares;
	printf("Bem vindo ao progama que pega um vetor de 10 posicoes e diz quantos sao pares :D ! ! !\n\n");
	for(i=0;i<10;i++){
		printf("Insira o valor do vetor na posicao %i: ", i+1);
		scanf("%i", &v[i]);
	}
	printf("\n\n\n");
	
	for(i=0;i<10;i++){
		printf("%i ", v[i]);
	}
	tpares=calcpares(v);
	printf("A quantidade de pares no vetor e: %i", tpares);
	
	
}
