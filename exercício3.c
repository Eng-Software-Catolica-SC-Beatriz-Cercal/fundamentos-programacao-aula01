#include <stdio.h>
#include <stdlib.h>

int main(void){
    float temperaturaF;
    float temperaturaC;

    printf("Digite a temperatura que deseja converter: ");
    scanf("%f", &temperaturaF);

    temperaturaC = 5 * (temperaturaF - 32) / 9;

    printf("A temperatura em Celsius é: %.2f", temperaturaC);

    return 0;
}