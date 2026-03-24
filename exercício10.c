#include <stdio.h>
#include <stdlib.h>
 int main (void){
    float valor, hora, salario;

printf("Digite o valor que você recebe por hora: ");
scanf("%f", &valor);
printf("Digite quantas horas você trabalha: ");
scanf("%f", &hora);
salario = valor * hora;
printf("O valor do seu salário é: %.2f", salario);
return 0;
 }