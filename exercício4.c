#include <stdio.h>
#include <stdlib.h>

int main(void){
    float temperaturaF;
    float temperaturaC;

    printf("Digite a temperatura que deseja converter: ");
    scanf("%f", &temperaturaC);

    temperaturaF = 5 * (temperaturaC - 32) / 9;

    printf("A temperatura em Fahrenheit é: %.2f", temperaturaF);

    return 0;
}
