#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pfibo(int n){
	if(n==1){
		return 0;
	}
	if(n==2 || n==3){
		return 1;
	}
	return pfibo(n-1)+pfibo(n-2);
}
main(){
	printf("Insira a posicao: ");
	int p;
	scanf("%i", &p);
	int result;
	result=pfibo(p);
	printf("O resultado e: %i", result);
}

