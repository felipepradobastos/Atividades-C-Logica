#include<stdlib.h>
#include<stdio.h>

main(){
	int fat,x;
	
	printf("Insira um valor\n");
	scanf("%i", &x);
	
	fat=1;
	while(x>1){
		fat=fat*x;
		x--;
	}
	printf("O Fatorial do numero e:%i", fat);
}
