#include <stdio.h>

int main() {

    int i;

    /* TORRE - move 5 casas para a direita (FOR) */
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* BISPO - move 5 casas na diagonal para cima e direita (WHILE) */
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("Movimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* RAINHA - move 8 casas para a esquerda (DO-WHILE) */
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
