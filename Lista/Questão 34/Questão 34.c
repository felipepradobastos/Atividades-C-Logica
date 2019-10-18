#include <stdlib.h>
#include <stdio.h>

main(){
	int ini, vet[10], rz, i, ini2;
	printf("Insira o valor inicial\n");
	scanf("%i", &ini);
	ini2=ini;
	printf("Insira a razão \n");
	scanf("%i", &rz);
	for(i=0;i<=9;i++){
		vet[i]=ini+rz;
		ini=vet[i];
	}
	printf("%i ", ini2);
	for(i=0;i<=9;i++){
		printf("%i ", vet[i]);
	}
	
}
