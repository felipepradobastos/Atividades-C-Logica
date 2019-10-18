#include <stdlib.h>
#include <stdio.h>

int distancia, litros, velocidade, tempo;
main(){
	printf("Por favor insira a duraçao de sua viagem em horas: \n");
	scanf("%i", &tempo);
	printf("Por favor insira a velocidade media de sua viagem em km/h : \n");
	scanf("%i", &velocidade);
	
	distancia=velocidade*tempo;
	litros=distancia/12;
	
	printf("Os dados da sua viagem sao \n:");
	printf("A distancia percorrida foi: %i km \n", distancia);
	printf("A velocidade media foi: %i kmh \n", velocidade);
	printf("O tempo dercorrido foi: %i horas \n", tempo);
	printf("A quantidade de litros de gasolina consumidos foi: %i litros \n", litros);

system("Pause");
}
	
	
	
