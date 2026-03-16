#include <stdio.h>
#include <stdlib.h>

int main (void){
    float raio;
    float area;
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;
    printf("A área do círculo é: %.2f", area);

}