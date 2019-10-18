#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
	int x, y, z;
	printf("Por gentileza insira tres numeros a seguir: \n");
	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);
	
	if(x>y && y>z){
		printf("%i %i %i \n", x, y, z);
	}
	if(x>z && y>z){
		printf("%i %i %i \n", x, y, z);
	}
	if(y>x && x>z){
		printf("%i %i %i \n", x, y, z);
	}
	if(y>z && z>x){
		printf("%i %i %i \n", x, y, z);
	}
	if(z>x && x>y){
		printf("%i %i %i \n", x, y, z);
	}
	if(z>y && y>x){
		printf("%i %i %i \n", x, y, z);
	}
}

