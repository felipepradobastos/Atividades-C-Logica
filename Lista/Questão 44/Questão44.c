#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	int len;
	char palavra[30];
	
	printf("Insira a palavra a seguir para calcularmos o seu comprimento: ");
	gets(palavra);
	puts(palavra);
	len=strlen(palavra);
	printf("O comprimento da palavra e de %i caracteres.", len);
}
