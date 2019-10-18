#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main(){
	int i, cont=0, len;
	char palavra[200], palavrasv[200];
	
	printf("Insira a palavra para printala sem as vogais: ");
	gets(palavra);
	
	len=strlen(palavra);
	
	for(i=0;i<=len;i++){
		if(palavra[i]=='a' || palavra[i]=='A' || palavra[i]=='E' || palavra[i]=='e' || palavra[i]=='I' || palavra[i]=='i' || palavra[i]=='O' || palavra[i]=='o' || palavra[i]=='U' || palavra[i]=='u'){
		}else{
			palavrasv[cont]=palavra[i];
			cont++;
		}
	}
	puts(palavrasv);
}
