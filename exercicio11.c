#include <stdio.h>
#include <stdlib.h>

int main (void){
    //Variáveis
    float dias, salario, desconto;
    //Entrada de dados
    printf("Quantos dias voce trabalhou?");
    scanf("%f", &dias);
    //Processamento
    salario = dias * 25;
    desconto = salario * 0.08;
    //Saída de dados
    printf("O valor do seu salario, com descontos: %.2f", salario - desconto);
    return 0;

}