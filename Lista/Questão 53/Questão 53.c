#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
calcdelta(int a, int b, int c){
	return pow(b,2)-(4*a*c);
}
main(){
	int va, vb, vc;
	printf("Bem vindo ao progama que calcula o valor de Delta :D ! ! !\n\n");
	printf("Insira o valor de A: ");
	scanf("%i", &va);
	printf("Insira o valor de B: ");
	scanf("%i", &vb);
	printf("Insira o valor de C: ");
	scanf("%i", &vc);
	printf("%i", calcdelta(va,vb,vc));
}
