#include<stdio.h>
#include<stdlib.h>

main(){
	int dd=0, mm=0, bisexto=0, quantdias=0;
	int ano=0;
	
	printf("Por favor insira o dia: ");
	scanf("%i", &dd);
	printf("Por favor insira o mes: ");
	scanf("%i", &mm);
	printf("Por favor insira o ano: ");
	scanf("%i", &ano);
	
	bisexto=ano%4;
	if(bisexto!=0){
		if(mm==1 || mm==3 || mm==5 || mm==7|| mm==8|| mm==10|| mm==12){
			quantdias=31;
			if(dd=31){
				dd=01;
				mm++;
				if(mm>12 && dd==31){
					ano++;
					mm=01;
				}
				}else{
					dd++;
				}
			}else{
				if(mm==4|| mm==6 || mm==7 || mm==11){
				quantdias=30;
				if(dd=30){
					dd=01;
					mm++;
				}else{
					dd++;
				}
			}else{
				quantdias=28;
				if(dd==28){
					dd=01;
					mm++;
				}else{
					dd++;
				}
			}
		}
	}
	if(bisexto==0){
		if(mm==1 || mm==3 || mm==5 || mm==7|| mm==8|| mm==10|| mm==12){
			quantdias=31;
			if(dd=31){
				dd=01;
				mm++;
				if(mm>12){
					ano++;
					mm=01;
				}
				}else{
					dd++;
				}
			}else{
				if(mm==4|| mm==6 || mm==7 || mm==11){
				quantdias=30;
				if(dd=30){
					dd=01;
					mm++;
				}else{
					dd++;
				}
			}else{
				quantdias=29;
				if(dd==29){
					dd=01;
					mm++;
				}else{
					dd++;
				}
			}
		}
	}
	printf(" A nova data e %i/%i/%i !!", dd,mm,ano);
}
