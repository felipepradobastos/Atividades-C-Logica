#include<stdlib.h>
#include<stdio.h>

main(){
	int vet[10], i, m, cont, soma=0;
	
	for(i=0;i<=9;i++){
		printf("Insira o valor do vetor na posicao %i:", i);
		scanf("%d", &vet[i]);
	}
	printf("Insira um numero para verificar se existem multiplos no vetor: ");
	scanf("%i", &m);
	for(i=0;i<=9;i++){
		if(vet[i]%m==0){
			soma=soma+vet[i];
			printf("%i\n", vet[i]);
		}
	}
	printf("A soma dos multiplos de %i e:%i", m, soma);
}
