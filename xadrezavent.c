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

    printf("\n");

    /* CAVALO - move em L: 2 casas para baixo e 1 para a esquerda */
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    int contador;

    printf("Movimento do Cavalo:\n");

    /* Loop externo controla as partes do movimento */
    for (i = 0; i < 2; i++) {

        /* Primeiro movimento: duas casas para baixo */
        if (i == 0) {
            contador = 0;
            while (contador < movimentosVerticais) {
                printf("Baixo\n");
                contador++;
            }
        }

        /* Segundo movimento: uma casa para a esquerda */
        if (i == 1) {
            contador = 0;
            while (contador < movimentosHorizontais) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }

    return 0;
}
