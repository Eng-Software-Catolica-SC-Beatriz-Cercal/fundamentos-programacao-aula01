#include <stdio.h>
#include <stdlib.h>

int main (void){
	//Quais são as variáveis?
	float numero1, numero2, resultado;
	
	//Quais são as entradas de dados?
	printf("Digite 1 numero:");
	scanf ("%f", &numero1);
	fflush(stdin);
	printf("Digite 2 numero:");
	scanf ("%f", &numero2);
	fflush(stdin);
	
	//Quais são os processamentos de dados?
	resultado=numero1+numero2;
	
	//Quais são as saídas dos dados?
	printf("%f + %f = %f", numero1, numero2, resultado);

return 0;	
}