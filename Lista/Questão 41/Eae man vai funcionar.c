
#include <stdlib.h>
#include <stdio.h>

int numero, i, contm, contc, contd, contu;
	
main(){
	printf("Insira o numero: ");
	scanf("%i", &numero);
	numero++;	
	if(numero<1000){
	contm=-1;}
	if(numero<100){
	contc=-1;}
	if(numero<10){
	contd=-1;}
	
	while(numero>1000){
		contm++;
		numero-=1000;
	}
	while(numero>100){
		contc++;
		numero-=100;
	}
	while(numero>10){
		contd++;
		numero-=10;
	}
	while(numero>0){
		contu++;
		numero-=1;
	}
	if(contm==0){
		printf("Zero ");
	}
	if(contm==1){
		printf("Um ");
	}
	if(contm==2){
		printf("Dois ");
	}
	if(contm==3){
		printf("Tres");
	}
	if(contm==4){
		printf("Quatro ");
	}
	if(contm==5){
		printf("Cinco ");
	}
	if(contm==6){
		printf("Seis ");
	}
	if(contm==7){
		printf("Sete ");
	}
	if(contm==8){
		printf("Oito ");
	}
	if(contm==9){
		printf("Nove ");
	}
	
	if(contc==0){
		printf("Zero ");
	}
	if(contc==1){
		printf("Um ");
	}
	if(contc==2){
		printf("Dois ");
	}
	if(contc==3){
		printf("Tres");
	}
	if(contc==4){
		printf("Quatro ");
	}
	if(contc==5){
		printf("Cinco ");
	}
	if(contc==6){
		printf("Seis ");
	}
	if(contc==7){
		printf("Sete ");
	}
	if(contc==8){
		printf("Oito ");
	}
	if(contc==9){
		printf("Nove ");
	}
	
	if(contd==0){
		printf("Zero ");
	}
	if(contd==1){
		printf("Um ");
	}
	if(contd==2){
		printf("Dois ");
	}
	if(contd==3){
		printf("Tres");
	}
	if(contd==4){
		printf("Quatro ");
	}
	if(contd==5){
		printf("Cinco ");
	}
	if(contd==6){
		printf("Seis ");
	}
	if(contd==7){
		printf("Sete ");
	}
	if(contd==8){
		printf("Oito ");
	}
	if(contd==9){
		printf("Nove ");
	}
	
	if(contu==0){
		printf("Zero ");
	}
	if(contu==1){
		printf("Um ");
	}
	if(contu==2){
		printf("Dois ");
	}
	if(contu==3){
		printf("Tres");
	}
	if(contu==4){
		printf("Quatro ");
	}
	if(contu==5){
		printf("Cinco ");
	}
	if(contu==6){
		printf("Seis ");
	}
	if(contu==7){
		printf("Sete ");
	}
	if(contu==8){
		printf("Oito ");
	}
	if(contu==9){
		printf("Nove ");
	}
}
