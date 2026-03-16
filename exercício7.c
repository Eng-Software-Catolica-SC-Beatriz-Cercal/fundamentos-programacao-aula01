#include <stdio.h>
#include <stdlib.h>

int main (void){
    float metro;
    float centimetro;

    printf("Digite o valor em metros: ");
    scanf("%f", &metro);
    centimetro = metro * 100;
    printf("O valor de metro para centímetro é: %.2f", centimetro);
}