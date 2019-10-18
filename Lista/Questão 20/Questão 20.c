#include<stdlib.h>
#include<stdio.h>

main(){
	int salario, novosalario;
	printf("Por gentileza informe o salario \n");
	scanf("%d", &salario);
	
	if(salario>1000){
		novosalario=salario*1.05;
	}else{
		if(salario<=1000 && salario>500){
			novosalario=salario*1.10;
		}else{
			if(salario<=500){
				novosalario=salario*1.15;
			}
		}
	}
	printf("O salario reajustado e:%i", novosalario);
}

