#include <stdio.h>
#include <stdlib.h>

int main(void){
 float numero1;
 float numero2;
 float numeroreal;
 float calculo1, calculo2, calculo3;

 printf("Digite o primeiro valor inteiro: ");
 scanf("%f", &numero1);
 printf("Digite o segundo valor inteiro: ");
 scanf("%f", &numero2);
 printf("Digite o único valor real: ");
 scanf("%f", &numeroreal);

 calculo1 = (numero1 * 2) * (numero2/2);
  calculo2 = (numero1 * 3) + (numeroreal);
  calculo3 = (numeroreal * numeroreal * numeroreal);

  printf("Primeiro cálculo: %f\n", calculo1);
  printf("Segundo cálculo: %f\n", calculo2);
  printf("Terceiro cálculo: %f\n", calculo3);







}