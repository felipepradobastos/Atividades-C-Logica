#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

// Nunca colocar printf, nem scanf nas funções ! ! !
int calculomedia(int a, int b, int c){
	return (pow(a,2))+b+c;
} 
main(){
	float v1, v2, v3;
	int result;
	printf("Insira o primeiro valor: ");
	scanf("%f", &v1);
	printf("Insira o segundo valor: ");
	scanf("%f", &v3);
	printf("Insira o terceiro valor: ");
	scanf("%f", &v2);
	result=calculomedia(v1,v2,v3);
	printf("%i", result);
}
