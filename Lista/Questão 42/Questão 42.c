#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main(){
	int i, len;
	char palavra[20], c;
	printf("Insira a palavra para remover os acontecimentos dela na string: ");
	gets(palavra);
	printf("Insira um Caracter para removelo da string: ");
	scanf("%c", &c);
	
	len=strlen(palavra);
	
	for(i=0;i<=len;i++){
		if(palavra[i]==c){
			for(i=i;i<=len;i++){
				palavra[i]=palavra[i+1];
			}
		}
	}
	
	for(i=0;i<=len;i++){
		printf("%c",palavra[i]);
	}
	
	
	
}
