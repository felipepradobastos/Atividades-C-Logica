#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

struct TipoProduto{
	char nome[100];
	float valor;
	char descri[200];
}produtos[5];
main(){
	int i, soma=0;
	for(i=0;i<5;i++){
		printf("Insira o nome do produto %i: ", i+1);
		gets(produtos[i].nome);
		printf("Insira o valor do produto %i: ", i+1);
		scanf("%f", &produtos[i].valor);
		printf("Insira a descricaoo do produto %i: ", i+1);
		fflush(stdin);
		gets(produtos[i].descri);
		soma=soma+produtos[i].valor;
		printf("O total atual e: %i", soma);
	}
	printf("O total e de: %i", soma);
}
