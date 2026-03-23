#include <stdio.h>
#include <stdlib.h>

int main(void){
  //Quais são as variáveis?88
 float numero1;
 float numero2;
 float numeroreal;
 float calculo1, calculo2, calculo3;

 printf("Digite o primeiro valor inteiro: ");
 scanf("%f", &numero1);
 fflush(stdin);
 printf("Digite o segundo valor inteiro: ");
 scanf("%f", &numero2);
 fflush(stdin);
 printf("Digite o único valor real: ");
 scanf("%f", &numeroreal);
 fflush(stdin);


 //Processamento de dados:
  calculo1 = (numero1 * 2) * (float)numero2/2; //Produto
  calculo2 = (numero1 * 3) + (numeroreal); //Soma
  calculo3 = (numeroreal * numeroreal * numeroreal); //Produto

  printf("Primeiro cálculo: %f\n", calculo1);
  printf("Segundo cálculo: %f\n", calculo2);
  printf("Terceiro cálculo: %f\n", calculo3);







}