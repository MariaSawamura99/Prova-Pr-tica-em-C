// 7. Desenvolva uma fun��o que receba um n�mero inteiro e determine se ele � par
//ou �mpar. Exiba uma mensagem correspondente para cada caso.


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
