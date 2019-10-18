#include<stdlib.h>
#include<stdio.h>

main(){
	int dd, mm, aa, bisexto, dmes;
	printf("Insira respectivamente Dia, mes e ano em formato DD/MM/AAAA");
	scanf("%f", &dd);
	scanf("%f", &mm);
	scanf("%f", &aa);
	bisexto=aa/4;
	if(bisexto==0){
		if((mm=1) || (mm=3) || (mm=5) || (mm=7) || (mm=8) || (mm=10) || (mm=12){
			dmes=31;
	}else{
		if(mm=4 || mm=6 || mm=9 || mm=11){
			dmes=30;
		}else{
			dmes=29;
		}
	}
	}else{
		if{(mm=1 || mm=3 || mm=5 || mm=7 || mm=8 mm=10 || mm=12){
		dmes=31;
	}else{
		if(mm=4 || mm=6 || mm=9 || mm=11){
			dmes=30;
		}else{
			dmes=28;
		}
	}
	}

