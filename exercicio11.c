#include <stdio.h>
#include <stdlib.h>

int main (void){
    //Variáveis
    float horas, salario, desconto, valor;
    //Entrada de dados
    printf("Quantas horas voce trabalhou?");
    scanf("%f", &horas);
    //Processamento
    salario = horas * 25;
    desconto = salario * 0.08;
    //Saída de dados
    printf("O valor do seu salario, com descontos: %.2f", salario - desconto);
    return 0;

}