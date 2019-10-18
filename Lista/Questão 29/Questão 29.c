#include<stdlib.h>
#include<stdio.h>
#include<time.h>

main(){
	srand(time(NULL));
	int cont, x, i=rand()%1000;
	
	printf("Gerei um numero aleatorio de 0 a 1000, tente acertar!: ");
	scanf("%i", &x);
	cont=1;
	if(x<i){
			printf("O numero e maior tente de novo: ");
			scanf("%i", &x);
		}
	if(x>i){
			printf("O numero e menor tente de novo: ");
			scanf("%i", &x);
	}
	while(x!=i){
		cont++;
		if(x<i){
			printf("O numero e maior tente de novo: ");
			scanf("%i", &x);
		}
		if(x>i){
			printf("O numero e menor tente de novo: ");
			scanf("%i", &x);
		}
	}
	printf("Voce Acertou com %i tentativas o numero era %i", cont, i);
}
