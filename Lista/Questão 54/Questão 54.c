#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int fat(int x){
	int i=x-1;
	while(i!=0){
		x=x*i;
		i--;
	}
	return x;
}

main(){
	int n, v1, v2, vt;
	printf("Bem vindo ao progama que calcula o fatorial quadruplo dos numeros :D ! ! !\n");
	printf("Digite o numero: ");
	scanf("%i", &n);
	v1=fat(2*n);
	v2=fat(n);
	vt=v1/v2;
	printf("O valor do fatorial quadruplo e: %i", vt);
}
