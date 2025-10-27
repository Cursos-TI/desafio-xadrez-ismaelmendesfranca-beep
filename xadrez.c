#include <stdio.h>

int main() {
  
    // TORRE – Estrutura FOR

    int casasTorre = 5;  // número de casas que a Torre vai se mover
    printf("= Movimento da TORRE =\n");
    printf("A Torre se move %d casas para a direita.\n\n", casasTorre);

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // linha em branco para separar as seções


    // BISPO – Estrutura WHILE
  
    int casasBispo = 5;  // número de casas que o Bispo vai se mover
    int contadorBispo = 1;

    printf("= Movimento do BISPO =\n");
    printf("O Bispo se move %d casas na diagonal para cima e à direita.\n\n", casasBispo);

    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

  
    // RAINHA – Estrutura DO-WHILE
   
    int casasRainha = 8;  // número de casas que a Rainha vai se mover
    int contadorRainha = 1;

    printf("= Movimento da RAINHA =\n");
    printf("A Rainha se move %d casas para a esquerda.\n\n", casasRainha);

    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
