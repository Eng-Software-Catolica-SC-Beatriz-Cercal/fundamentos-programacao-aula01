#include <stdio.h>
#include <stdlib.h>

int main (void){
    //Quais são as variáveis?
    float metro;
    float centimetro;

    //Entrada de dados:
    printf("Digite o valor em metros: ");
    scanf("%f", &metro);
    fflush(stdin);
    //Processamento:
    centimetro = metro * 100;
    //Saída de dados:
    printf("O valor de metro para centímetro é: %.2f", centimetro);
    return 0;
}