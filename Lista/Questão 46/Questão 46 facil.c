#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char palavra1[30], palavra2[30];
	int i, cmp;
	
	printf("Insira a primeira palavra: ");
	gets(palavra1);
	printf("Insira a segunda palavra: ");
	gets(palavra2);
	cmp=stricmp(palavra1,palavra2);
	if(cmp==0){
		printf("A segunda esta contida na primeira !!!!");
	}else{
		printf("A segunda nao esta contida na primeira :( !!!");
	}
}
