#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char palavra[100],novapalavra[100],palavramist[100];
	int x ,y,i,j,k,num,cont;
	printf("digite uma string: ");
	fgets(palavra,100,stdin);
	printf("digite outra string pra saber se ela estar na primeira: ");
	fgets(novapalavra,100,stdin);
x=strlen(palavra);
y=strlen(novapalavra);
for(i=0;i<x;i++){
	for(j=0;j<y;j++){
		if(palavra[i]==novapalavra[j]){
			cont++;
			palavramist[j]=palavra[j];
			k++;
		}
	}
}
num=!stricmp(palavra,palavramist);
if(num==0){
	printf("a string %s\n estar contida nessa string %s\n dessa forma %s\n ",palavra,novapalavra,palavramist);
}
}
