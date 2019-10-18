#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct TipoAluno{
	char nome[100];
	float nota1, nota2, nota3, media;
}aluno[3];

main(){
	int i, j;
	float maiormedia=0;
	for(i=0;i<3;i++){
		printf("Insira seu nome: ");
		fflush(stdin);
		gets(aluno[i].nome);
		printf("Insira a primeira nota: ");
		fflush(stdin);
		scanf("%f", &aluno[i].nota1);
		printf("Insira a segunda nota: ");
		fflush(stdin);
		scanf("%f", &aluno[i].nota2);
		printf("Insira a terceira nota: ");
		fflush(stdin);
		scanf("%f", &aluno[i].nota3);
		aluno[i].media=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
	}
	for(i=0;i<3;i++){
		if(aluno[i].media>maiormedia){
			maiormedia=aluno[i].media;
			j=i;
		}
	}
	printf("%s e o aluno com maior media, sua media eh: %.2f", aluno[j].nome, maiormedia);
}
