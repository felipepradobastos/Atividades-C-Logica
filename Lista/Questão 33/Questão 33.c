#include <stdio.h>
#include <stdlib.h>

main(){
	int vetx[15], vety[15], i, cont=0;
	
	for(i=0;i<=14;i++){
		printf("Insira um valor para o primeiro vetor na posicao %i:", i+1);
		scanf("%i", &vetx[i]);
	}
	printf("Agora o segundo vetor");
	for(i=0;i<=14;i++){
		printf("Insira um valor para o segundo vetor na posicao %i:", i+1);
		scanf("%i", &vety[i]);
	}
	for(i=0;i<=14;i++){
		if(vety[i]==vetx[i]){
			cont++;
		}
	}
	printf("A quantidade de vezes que se repetem os numeros e:%i", cont);
	
}
