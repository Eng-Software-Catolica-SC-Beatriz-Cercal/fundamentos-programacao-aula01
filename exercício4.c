#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Quais são as variáveis?
    float temperaturaF;
    float temperaturaC;

    //Entrada de dados:
    printf("Digite a temperatura que deseja converter: ");
    scanf("%f", &temperaturaC);

    temperaturaF = (temperaturaC * 1.8) + 32;

    printf("A temperatura em Fahrenheit é: %.2f", temperaturaF);

    return 0;
}
