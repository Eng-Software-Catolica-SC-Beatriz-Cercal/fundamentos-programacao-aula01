#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Digite a temperatura que deseja converter:");
    float temperaturaF;
    float temperaturaC =  5 * (temperaturaF - 32) / 9;
    printf ("A temperatura em Celsius é: %.2f", temperaturaC);
    
}