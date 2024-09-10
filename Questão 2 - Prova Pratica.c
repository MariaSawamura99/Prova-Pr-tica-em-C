//2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
//bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
//divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
//por 400. (0.1 ponto)


#include <stdio.h>

void verifano(int ano) {
    if (ano % 400 == 0) {
        printf("1\n","ano bissexto");  
        return;
    } else if (ano % 100 == 0) {
    
        return;
    } else if (ano % 4 == 0) {
        printf("1\n", "ano bissexto"); 
        return;
    }

}

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    verifano(ano);

    return 0;
}