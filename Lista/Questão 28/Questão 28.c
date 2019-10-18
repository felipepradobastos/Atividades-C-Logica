#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	int x, soma=0, exatos, resto, cont;
	
	do{
		printf("Insira um valor, para parar digite 0:");
		scanf("%i", &x);
		exatos=0;
		cont=1;
		while(cont<=x){
			resto=x%cont;
			if(resto==0){
				exatos++;
			}
			cont++;
		}
		if(exatos==2){
			soma=soma+x;
		}
	}while(x!=0);
	printf("A soma dos primos e:%i", soma);
	
}
