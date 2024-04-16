#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � positivo
    if (numero <= 0) {
        printf("O numero nao e positivo.\n");
        return 0;
    }

    // Verifica se o n�mero � par
    if (numero % 2 != 0) {
        printf("O numero nao e par.\n");
        return 0;
    }

    // Verifica se o n�mero � menor que 100
    if (numero >= 100) {
        printf("O numero nao e menor que 100.\n");
        return 0;
    }

    // Verifica se o n�mero � divis�vel por 3
    if (numero % 3 != 0) {
        printf("O numero nao e divisivel por 3.\n");
        return 0;
    }

    // Se o n�mero atender a todas as condi��es, exibe "N�mero v�lido!"
    printf("Numero valido!\n");

    return 0;
}

