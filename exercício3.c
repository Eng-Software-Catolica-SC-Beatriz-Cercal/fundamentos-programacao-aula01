#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Quais são as variáveis?
    float temperaturaF;
    float temperaturaC;

    //Quais são as entradas de dados?
    printf("Digite a temperatura que deseja converter: ");
    scanf("%f", &temperaturaF);
    fflush(stdin);

    //Processamento de dados;
    temperaturaC = 5 * (temperaturaF - 32) / 9;

    //Quais são as saídas de dados?
    printf("A temperatura em Celsius é: %.2f", temperaturaC);

    return 0;
}