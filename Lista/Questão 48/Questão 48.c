#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct TipoFuncionario{
	char name[100];
	char adress[150];
	char telefone[14];
	char email[100];
	float salario;
}func[3];

main(){
	int i, j;
	float tsalario=0, maior=0;
	for(i=0;i<3;i++){
		printf("Insira o nome: ");
		fflush(stdin);
		gets(func[i].name);
		printf("Insira o endereco: ");
		fflush(stdin);
		gets(func[i].adress);
		printf("Insira o telefone: ");
		fflush(stdin);
		gets(func[i].telefone);
		printf("Insira email: ");
		fflush(stdin);
		gets(func[i].email);
		printf("Insira o salario: ");
		fflush(stdin);
		scanf("%f", &func[i].salario);
		printf(" \n \n");
	}
	for(i=0;i<3;i++){
		if(func[i].salario>maior){
			maior=func[i].salario;
			j=i;
		}
		tsalario=tsalario+func[i].salario;
	}
	printf("O total de salarios e: %f", tsalario);
	printf("O funcionario de maior salario e %s e seu salario e de: %f", func[j].name, func[j].salario);
}
