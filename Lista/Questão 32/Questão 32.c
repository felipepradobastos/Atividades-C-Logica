#include <stdlib.h>
#include <stdio.h>

main(){
	int vetx[20], vety[20], i, x, z;
	for(i=0;i<=19;i++){
		printf("Insira o valor para o vetor na posicao %i \n", i);
		scanf("%i", &vetx[i]);
		vety[i]=vetx[i];
	}
	printf("Por favor insira outro valor para verificar se ele existe no vetor:");
	scanf("%i", &x);
	for(i=0;i<=19;i++){
		if(vetx[i]==x){
			for(z=0;z<=19;z++){
				if(z!=i){
					printf("%i\n", vety[z]);
				}
			}
		}
	}
}
