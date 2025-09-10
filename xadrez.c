#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    } else {
        printf("\n");
    }
}

void moverBispo(int casas) {
    int moveX = 1, moveY = 1;

    if (casas > 0) {
        while (moveX--) {
            printf("Cima\n");
            while (moveY--) {
                printf("Direita\n");
            }
        }
        
        moverBispo(casas - 1);
    } else {
        printf("\n");
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    } else {
        printf("\n");
    }
}

void moverCavalo() {
    for (int x = 1, y = 2; x > 0 ; x--) {
        while (y--) {
            printf("Cima\n");
        }

        printf("Direita\n");
    }

    printf("\n");
}

int main() {
    // printf("+-----------------------------------+\n");
    // printf("|                                   |\n");
    // printf("|         Desafio Xadrez            |\n");
    // printf("|                                   |\n");
    // printf("+-----------------------------------+\n");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoTorre = 5; // 5 cassa para direita
    int movimentoBispo = 5; // 5 cassa na diagonal cima direita
    int movimentoRainha = 8; // 8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    moverBispo(movimentoBispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    moverTorre(movimentoTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    moverRainha(movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    moverCavalo();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
