//Questão 17

#include<stdlib.h>
#include<stdio.h>

main(){
	float m1, m2, m3, me, ma=0;
	printf("Insira respectivamente as tres notas e a media dos exercicios");
	scanf("%f", &m1);
	scanf("%f", &m2);
	scanf("%f", &m3);
	scanf("%f", &me);
	ma=(m1+m2*2+m3*3+me)/7;
	
	if(ma>=60){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
}
