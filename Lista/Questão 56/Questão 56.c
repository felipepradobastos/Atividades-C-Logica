//Questão 56
#include<stdio.h>
int fat(int num){
	int cont=num-1;
	while(cont>0){
		num=num*cont;
		cont--;
	}
	return num;
}
int sfat(int num){
	if(num==1){
		return fat(num);
	}
	return sfat(num-1)*fat(num);
}
main(){
	printf("Insira o numero para calcular o super fatorial: ");
	int n;
	scanf("%i", &n);
	int result;
	result=sfat(n);
	printf("O resultado e: %i", result);
}

