#include <stdio.h>
#include <stdlib.h>

int main (void){
    //Variáveis
    float salariob, ir, inss, sindicato, descontos, salariol;
    //Entrada de dados
    printf ("Digite seu salaário bruto mensal: R$");
    scanf("%f", &salariob);
    fflush(stdin);
    //Processamento de dados
    ir = salariob * 0.15;
    inss = salariob * 0.11;
    sindicato = salariob * 0.03;
    descontos = ir + inss + sindicato;
    salariol = salariob - descontos;
    //Saída de dados
    printf("Salário Bruto : R$ %.2f\n", salariob);
    printf ("(-) IR: R$ %.2f\n", ir);
    printf ("(-) INSS: R$ %.2f\n", inss);
    printf ("(-) Sindicato: R$ %.2f\n", sindicato);
    printf ("Salário Líquido : R$ %.2f", salariol);
    return 0;

}
