//6)Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
//reprovação caso contrário. A função deve exibir mensagens para os dois casos.


#include <stdio.h>

void verificarAprovacao(float nota) {
    if (nota >= 7.0) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}

int main() {
    float nota;

    printf("Digite a nota do aluno (de 0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 0.0 && nota <= 10.0) {
        verificarAprovacao(nota);
    } else {
        printf("Nota inválida. Insira uma nota entre 0 e 10.\n");
    }

    return 0;
}