//3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
//formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
//for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
//retornar 1. Caso contrário, não deve retornar nada. (

#include <stdio.h>

void verificarTriangulo(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("1\n");  // É um triângulo válido
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    verificarTriangulo(lado1, lado2, lado3);

    return 0;
}