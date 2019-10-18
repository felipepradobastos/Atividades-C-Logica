#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int x, z;
main(){
	printf("Insira um numero a seguir:");
	scanf("%i", &x);
	z=x%2;
	if(z==0){
		printf("O numero e par\n");
	}else{
		printf("O numero e impar\n");
	}
	if(x<0){
		printf("o numero e negativo\n");
	}else{
		printf("o numero e positivo");
	}
	
}
