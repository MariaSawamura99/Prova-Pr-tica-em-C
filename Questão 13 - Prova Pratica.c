// Crie um programa que simule uma calculadora simples. O programa deve
// permitir ao usu�rio escolher entre quatro opera��es aritm�ticas: soma, subtra��o,
// multiplica��o e divis�o. O usu�rio deve informar a opera��o desejada e dois
// n�meros. O programa deve realizar a opera��o selecionada e exibir o resultado.
// Caso a opera��o n�o seja reconhecida, o programa deve informar um erro.

#include <stdio.h>

int main()
{
    char operador;
    float numero1;
    float numero2;
    float resultado;

    printf("Insira o operador ");
    scanf("%c", &operador);

    printf("Insira os dois numeros ");
    scanf("%f %f", &numero1, &numero2);

    if (operador == '+')
    {
        resultado = numero1 + numero2;
    }
    else if (operador == '-')
    {
        resultado = numero1 - numero2;
    }
    else if (operador == '*')
    {
        resultado = numero1 * numero2;
    }
    else if (operador == '/')
    {
        resultado = numero1 / numero2;
    }
    else
    {
        printf("O operador eh invalido\n");
    }

    printf("%0.1f\n", resultado);
}
