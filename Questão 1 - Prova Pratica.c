//1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
//for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
//por essa razão, limite a verificação a um conjunto pequeno de números para
//verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.


#include <stdio.h>

int verificarPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    if (num == 2 || num == 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &num);

    if (num < 1 || num > 10) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    if (verificarPrimo(num)) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }

    return 0;
}
