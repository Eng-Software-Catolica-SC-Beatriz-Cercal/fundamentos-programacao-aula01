#include <stdio.h>
#include <stdlib.h>

int main (void){
    float dias, salario, desconto;
    printf("Quantos dias voce trabalhou?");
    scanf("%f", &dias);
    salario = dias * 25;
    desconto = salario * 0.08;
    printf("O valor do seu salario, com descontos: %.2f", salario - desconto);

}