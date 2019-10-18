#include<stdlib.h>
#include<stdio.h>


main(){
	float ipol;
	printf("Insira o indice de Poluicao:");
	scanf("%f", &ipol);
	
	if(ipol>=0.5){
		printf("Todas as empresas devem suspender as atividades.");
	}else{
		if(ipol>=0.4){
			printf("As empresas do primeiro e segundo setor devem suspender as atividades.");
		}else{
			if(ipol>=0.3){
				printf("As empresas do primeiro setor deveram suspender as atividades.");
			}
		}
	}
	
}
