#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int wtf(int x){
	int i;
	float v[3], w, z, result;
	for(i=0;i<3;i++){
		printf("Insira o valor %i:", i);
		scanf("%i", &v[i]);
	}
	w=v[0]*v[0];
	z=w+v[1]+v[2];
	printf("%f", w+z);
}
main(){
	int k=0;
	float resultado;
	wtf(k);
	
}
