#include <stdio.h>

void verificarTrianguloRetangulo(int a, int b, int c) {
    int hipotenusa, cateto1, cateto2;

    // Encontrar o maior lado (hipotenusa) e os outros dois lados (catetos)
    if (a > b && a > c) {
        hipotenusa = a;
        cateto1 = b;
        cateto2 = c;
    } else if (b > a && b > c) {
        hipotenusa = b;
        cateto1 = a;
        cateto2 = c;
    } else {
        hipotenusa = c;
        cateto1 = a;
        cateto2 = b;
    }

    // Verificar se é um triângulo retângulo
    if (hipotenusa * hipotenusa == cateto1 * cateto1 + cateto2 * cateto2) {
        printf("O triângulo é retângulo.\n");
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    verificarTrianguloRetangulo(lado1, lado2, lado3);

    return 0;
}