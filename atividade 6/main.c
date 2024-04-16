#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("O numero nao e positivo.\n");
        return 0;
    }

    // Verifica se o número é par
    if (numero % 2 != 0) {
        printf("O numero nao e par.\n");
        return 0;
    }

    // Verifica se o número é menor que 100
    if (numero >= 100) {
        printf("O numero nao e menor que 100.\n");
        return 0;
    }

    // Verifica se o número é divisível por 3
    if (numero % 3 != 0) {
        printf("O numero nao e divisivel por 3.\n");
        return 0;
    }

    // Se o número atender a todas as condições, exibe "Número válido!"
    printf("Numero valido!\n");

    return 0;
}

