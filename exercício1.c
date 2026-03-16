#include <stdio.h>
#include <stdlib.h>
 
int main(void){
	//Variáveis
	char nome[]="Beatriz Cercal Cachoeira"; //número de variáveis []
	char sexo='F'; //Um caractere use aspas simples
	int idade=17;
	float altura=1.61;
	//[tipo da variável] [nome da variável];
	
	
	//Saídas 
	printf("Nome = %s\n",nome); 
	printf("Idade = %i\n",idade);
	printf("Altura = %f\n",altura);
	printf("Sexo = %c\n",sexo);
	
	return 0;
}