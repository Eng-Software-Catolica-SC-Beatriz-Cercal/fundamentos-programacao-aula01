#include <stdio.h>
#include <stdlib.h>

int main (void){
    //Variáveis
    float nota1, nota2, nota3, nota4, media;
    //Entrada de dados
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    fflush(stdin);
    printf("Digite sua quarta nota: ");
    scanf("%f", &nota4);
    fflush(stdin);
    //Processamento de dados
    media = (nota1+nota2+nota3+nota4)/4;
    //Saída de dados
    printf("A média das suas notas é: %.2f", media);
    return 0;
}