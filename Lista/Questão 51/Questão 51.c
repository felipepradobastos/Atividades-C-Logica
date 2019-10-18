#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

float calcmedia(float somax, int contx){
	return somax/contx;
}
main(){
	int cont=0;
	float value, soma=0;
	printf("Bem vindo ao progama, insira diversos numeros inteiros positivos para calcular sua media, digite 0 para encerrar ! \n\n");
	printf("Insira o primeiro valor: ");
	scanf("%f", &value);
	while(value!=0 && value>0){
		soma+=value;
		cont++;
		printf("Insira outro valor: ");
		scanf("%f", &value);
	}
	printf("A media eh: %f", calcmedia(soma, cont));
}
