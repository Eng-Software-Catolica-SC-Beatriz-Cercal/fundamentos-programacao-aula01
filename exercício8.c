#include <stdio.h>
#include <stdlib.h>

int main (void){
    float numero1;
    float numero2;
    float soma;
    
    printf("Digite o primeiro número:");
    scanf("%f", &numero1);
    printf("Digite o segundo número:");
    scanf("%f", &numero2);
    soma = numero1 + numero2;
    printf("A soma dos dois números é: %.2f", soma);


}