#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char palavra1[30], palavra2[30];
	int	i, tam1=0, tam2=0, cont=0, sei;
	
	printf("Insira a primeira palavra: ");
	gets(palavra1);
	tam1=strlen(palavra1);
	printf("Insira a segunda palavra: ");
	gets(palavra2);
	tam2=strlen(palavra2);
	for(i=0;i<=tam1;i++){
		if(palavra1[i]==palavra2[i]){
			cont++;
		}
	}
	tam1=strlen(palavra1);
	printf("%i\n", cont);
	printf("%i\n", tam2);
	if(cont-1==tam2){
		printf("A palavra %s esta contida em %s", palavra2, palavra1);
	}else{
		printf("A palavra %s nao esta contida em %s", palavra2, palavra1);
	}
}
