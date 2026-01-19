#include <stdio.h>

/* Recursividade: imprime "Direita" N vezes (Torre) */
void moverTorreRec(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreRec(casas - 1);
}

/* Recursividade: imprime "Esquerda" N vezes (Rainha) */
void moverRainhaRec(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRec(casas - 1);
}

/*
  Bispo:
  - Recursivo para controlar o total de "passos" na diagonal.
  - Em cada passo, usa loops aninhados:
    loop externo = vertical (Cima)
    loop interno = horizontal (Direita)
*/
void moverBispoRecComLoops(int passosRestantes) {
    int v, h;

    if (passosRestantes <= 0) return;

    for (v = 0; v < 1; v++) {          /* vertical (externo) */
        for (h = 0; h < 1; h++) {      /* horizontal (interno) */
            printf("Cima, Direita\n");
        }
    }

    moverBispoRecComLoops(passosRestantes - 1);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorreRec(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRecComLoops(casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaRec(casasRainha);

    printf("\n");

    /*
      Cavalo (loops complexos):
      Movimento em L: 2 casas para cima e 1 casa para direita.
      Usa loops aninhados com multiplas variaveis/condicoes e controle com continue/break.
    */
    printf("Movimento do Cavalo:\n");

    int subirTotal = 2;
    int direitaTotal = 1;

    int up = 0;
    int right = 0;

    for (up = 0, right = 0; up <= subirTotal; up++) {
        if (up == subirTotal) break;

        printf("Cima\n");

        if (up == subirTotal - 1) {
            int tentativas = 0;
            while (right < direitaTotal) {
                tentativas++;

                if (tentativas > 5) break;
                if (direitaTotal == 0) continue;

                printf("Direita\n");
                right++;
            }
        }
    }

    printf("\nSugestao GitHub:\n");
    printf("git add xadrez.c\n");
    printf("git commit -m \"feat: recursividade para torre/bispo/rainha e loops complexos no cavalo\"\n");
    printf("git push\n");

    return 0;
}
