#include <stdlib.h>
#include <stdio.h>

main(){
	int A=10, B=20, troca;
	troca=A;
	A=B;
	B=troca;
	printf("Os valores invertidos são respectivamente A:%i e B: %i", A, B);
}
