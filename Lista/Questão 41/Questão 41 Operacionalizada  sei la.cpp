#include<stdio.h>
#include<stdlib.h>

main(){
	char numero[100];
	int cont, i;
	
	printf("Insira o numero a seguir: ");
	gets(numero);
	i=0;
	cont=0;
	while(numero[i]!='\0'){
		cont++;
		i++;
	}
	for(i=0; i<=cont; i++){
		if(numero[i]=='1'){
			printf("Um ");
		}
		if(numero[i]=='2'){
			printf("Dois ");
		}
		if(numero[i]=='3'){
			printf("Tres ");
		}
		if(numero[i]=='4'){
			printf("Quatro ");
		}
		if(numero[i]=='5'){
			printf("Cinco ");
		}
		if(numero[i]=='6'){
			printf("Seis ");
		}
		if(numero[i]=='7'){
			printf("Sete ");
		}
		if(numero[i]=='8'){
			printf("Oito ");
		}
		if(numero[i]=='9'){
			printf("Nove ");
		}
		if(numero[i]=='0'){
			printf("Zero");
		}
	}
	
}
