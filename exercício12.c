#include <stdio.h>
#include <stdlib.h>

int main (void){
    float salariob, ir, inss, sindicato, descontos, salariol;
    printf ("Digite seu salaário bruto mensal: R$");
    scanf("%f", &salariob);
    ir = salariob * 0.15;
    inss = salariob * 0.11;
    sindicato = salariob * 0.03;
    descontos = ir + inss + sindicato;
    salariol = salariob - descontos;
    printf("Salário Bruto : R$ %.2f\n", salariob);
    printf ("(-) IR: R$ %.2f\n", ir);
    printf ("(-) INSS: R$ %.2f\n", inss);
    printf ("(-) Sindicato: R$ %.2f\n", sindicato);
    printf ("Salário Líquido : R$ %.2f", salariol);

}
