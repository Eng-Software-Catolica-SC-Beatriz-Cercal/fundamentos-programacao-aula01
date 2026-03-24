#include <stdio.h>
#include <stdlib.h>

int main (void){
    //Quais são as variáveis?
    float raio;
    float area;
    //Quais são as entradas de dados?
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
    //Processamento:
    area = 3.14 * raio * raio;
    //Quais são as saídas de dados?
    printf("A área do círculo é: %.2f", area);
    return 0;
}