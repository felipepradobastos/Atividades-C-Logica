#include<stdio.h>
#include<stdlib.h>

main(){
	float c, f;
	printf("Por Gentileza, informe uma temperatura na escala Celsius a seguir:\n");
	scanf("%f", &c);
	f=c*9/5+32;
	printf("A temperatura convertida em Fahrenheit e: %f Graus Fahrenheit", f);
system("PAUSE");
}
