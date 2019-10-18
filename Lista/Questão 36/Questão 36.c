#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){
	int m[10][10], i, j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i==j){
				m[i][j]=1;
			}else{
				m[i][j]=0;
			}
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t", m[i][j]);
		}printf("\n");
	}
}
