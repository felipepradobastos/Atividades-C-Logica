#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct TipoJogador{
	char nome[100];
	float score;
	int idade;
}jogador[5];

main(){
	int i, j, idadem;
	float scoresoma=0, scoremedia=0;
	for(i=0;i<5;i++){
		printf("Insira seu nome: ");
		fflush(stdin);
		gets(jogador[i].nome);
		printf("Insira seu score: ");
		scanf("%f", &jogador[i].score);
		printf("Insira sua idade: ");
		scanf("%d", &jogador[i].idade);
		scoresoma=scoresoma+jogador[i].score;
	}
	
	scoremedia=(scoresoma/5);
	idadem=0;
	for(i=0;i<5;i++){
		if(jogador[i].idade>idadem){
			idadem=jogador[i].idade;
			j=i;
		}
	}
	printf("A media de score dos jogadores e %f", scoremedia);
	printf("O jogador com maior idade e %s e sua idade e %i", jogador[j].nome, jogador[j].idade);
}
