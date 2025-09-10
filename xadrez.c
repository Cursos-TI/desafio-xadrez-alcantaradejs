#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("+-----------------------------------+\n");
    printf("|                                   |\n");
    printf("|         Desafio Xadrez            |\n");
    printf("|                                   |\n");
    printf("+-----------------------------------+\n");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoTorre = 5; // 5 cassa para direita
    int movimentoBispo = 5; // 5 cassa na diagonal cima direita
    int movimentoRainha = 8; // 8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimento do bispo:\n\n");
    int ib = 1;
    while (ib <= movimentoBispo) {
        printf("Cima Direita\n");
        
        ib++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimento do Torre:\n\n");
    int it = 1;
    do {
        printf("Direita\n");
        
        it++;
    } while (it <= movimentoTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimento da Rainha:\n\n");
    for (int i = 1; i <= movimentoRainha; i++) {
        printf("Esquerda\n");
    }    
        
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo:\n\n");
    int movimentoCavalo = 1;

    for (int mv = 1; mv <= movimentoCavalo; mv++) {
        for (int i = 1; i <= 2; i++) { // 2 movimento para baixo
            printf("Baixo\n");
        }  
        printf("Esquerda\n"); // 1 movimento para esquerda
    }
    

    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n-------------------------------------\n");

    return 0;
}
