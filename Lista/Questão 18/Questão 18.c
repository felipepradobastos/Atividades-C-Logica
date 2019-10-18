//Questão 17

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	float x, result;
	printf("Insira um valor para x para calcular a funcao f(x) \n");
	scanf("%f", &x);
	
	if(x<=1){
		result=1;
	}else{
		if(1<x && x<=2){
			result=2;
		}else{
			if(2<x && x<=3){
				result=(pow(x,2));
			}else{
				result=(pow(x,3));
			}
		}
	}
	printf("O resultado e:%f", result);
}
