//8)Elabore uma função que calcule o imposto sobre um salário com base no valor
//recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
//contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
//pago.

#include <stdio.h>

int main (void)
{
    float salario;
    float valor_final;

    printf ("Informe o seu salario: ");
    scanf ("%f", &salario);

    if (salario>5000) {
        printf ("Valor do imposto: %.2f",salario*0.2);


    } else {
       printf ("Valor do imposto: %.2f",salario*0.1);
    }


}
