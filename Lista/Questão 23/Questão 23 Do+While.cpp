#include <stdio.h>
#include <stdlib.h>

main(){
	int x=1, soma=0;
	
	do{
		soma=soma+x;
		x=x+1;
	}while(x<=100);
printf("O valor da soma e:%i", soma);
}
