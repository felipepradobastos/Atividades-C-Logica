#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int x, R;
	printf("Por Favor insira um valor a seguir: \n");
	scanf("%d", &x);
	if(x>=10){
		R=-x+5;
	}else{
		R=-x-7;
	}
	printf("A resposta e:%i", R);
}

