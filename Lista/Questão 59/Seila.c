#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int invert(int num, int c, int wtf){
	int cont,result, resto;
	if(c==1){
		return num*wtf;
	}
	cont=pow(10,c-1);
	result=num/cont;
	resto=num%cont;
	result=result*wtf;
	wtf=wtf*10;
	return result+invert(resto,c-1,wtf);
}
main(){
	int num, qcasas, numero, resto, wtf=1;
	printf("Insira o numero: ");
	scanf("%i", &num);
	numero=num;
	for(qcasas=0;numero>0;qcasas++){
		numero=numero/10;
	}
	printf("%i", qcasas);
	int result;
	result=invert(num,qcasas,wtf);
	printf("O resultado e: %i", result);
}


