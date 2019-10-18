#include<string.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	char palavra1[30], palavra2[30], c;
	int i, tam, ind;

	printf("Insira a palavra: ");
	gets(palavra1);
	printf("Insira o Caracter: ");
	scanf("%c", &c);
	printf("Insira o indice que quer inserir o carater: ");
	scanf("%i", &ind);
	
	tam=strlen(palavra1);
	
	for(i=0;i<=tam;i++){
		palavra2[i]=palavra1[i];
	}
	
	for(i=ind;i<=tam;i++){
		palavra2[i+1]=palavra1[i];
	}
	palavra2[ind]=c;
	tam= strlen(palavra2);
	
	for(i=0;i<=tam;i++){
		printf("%c", palavra2[i]);
	}
}
