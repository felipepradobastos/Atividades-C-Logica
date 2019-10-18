#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct TipoProduto{
	char nome[100];
	float preco;
	char descri[100];
}product[5];
main(){
	int i;
	float soma=0;
	
	for(i=0;i<5;i++){
		printf("Insira o nome do produto %i: \n", i+1);
		gets(product[i].nome);
		printf("Insira o preço do produto %i: \n", i+1);
		scanf("%f", &product[i].preco);
		printf("Insira a descricao do produto %i: \n", i+1);
		fflush(stdin);
		gets(product[i].descri);
		printf("\n");
		soma=soma+product[i].preco;
	}
	printf("O valor e: %f", soma);
}
