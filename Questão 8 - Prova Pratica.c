//8)Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
//recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
//contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
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
