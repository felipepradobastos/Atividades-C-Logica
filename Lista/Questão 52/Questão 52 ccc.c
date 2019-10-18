#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int cu(float x, float z, float y){
	int w, u;
	w=x*x;
	z=u+y;
	return w+z;
}
main(){
	float n1, n2, n3;
	printf("Insira o primeiro valor: ");
	scanf("%i", &n1);
	printf("Insira o segundo valor: ");
	scanf("%i", &n2);
	printf("Insira o terceiro valor: ");
	scanf("%i", &n3);
	printf("%i", cu(n1,n2,n3));
}
