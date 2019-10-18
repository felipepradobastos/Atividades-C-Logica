#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int x, y, r, cont, limitador, soma;
	printf("Quantas series de fibonnaci voce deseja exibir:");
	scanf("%i", &limitador);
	x=0;
	y=1;
	r=x+y;
	soma=1;
	printf("%i\n", x);
	printf("%i\n", y);
	for(cont=3; cont<=limitador; cont++){
		x=y;
		y=r;
		r=x+y;
		printf("%i\n", r);
		soma=soma+r;
	}
	printf("A soma dos numeros e:%i", soma);
}
