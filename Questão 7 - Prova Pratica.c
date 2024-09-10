// 7. Desenvolva uma função que receba um número inteiro e determine se ele é par
//ou ímpar. Exiba uma mensagem correspondente para cada caso.


#include <stdio.h>

int verf_par(int num) {
    return num%2==0;
}

int main (void){
    int num;

    printf ("Escreva um numero\n");
    scanf ("%d",&num);

    int par = verf_par(num);
    printf ("%d",par);
}
