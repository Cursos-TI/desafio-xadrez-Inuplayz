#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// =============================
// Funções auxiliares do Nível Mestre
// =============================

// Função recursiva da Torre (5 casas para a direita)
void rookRecursive(int steps, int current) {
    if (current > steps) return; // caso base
    printf("Right\n");
    rookRecursive(steps, current + 1); // chamada recursiva
}

// Função recursiva do Bispo (5 casas em diagonal superior direita)
void bishopRecursive(int steps, int current) {
    if (current > steps) return; // caso base
    printf("Up Right\n");
    bishopRecursive(steps, current + 1);
}

// Função recursiva da Rainha (8 casas para a esquerda)
void queenRecursive(int steps, int current) {
    if (current > steps) return; // caso base
    printf("Left\n");
    queenRecursive(steps, current + 1);
}

// Função para movimentação do Cavalo (1 L para cima-direita)
// utilizando múltiplas variáveis e continue/break
void knightMaster() {
    printf("\nKnight Movement (Master Level):\n");

    for (int up = 1, right = 0; up <= 2; up++) {
        printf("Up\n");
        if (up == 2) {
            while (right < 1) {
                right++;
                if (right == 1) {
                    printf("Right\n");
                    break; // encerra após completar o movimento em L
                }
            }
        } else {
            continue; // continua até completar os 2 movimentos para cima
        }
    }
}

int main() {
    // ================================
    // Nível Novato - Movimentação das Peças
    // ================================

    // Implementação de Movimentação da Torre (5 casas para a direita, usando FOR)
    printf("Rook Movement (Novice Level):\n");
    const int rookSteps = 5;
    for (int i = 1; i <= rookSteps; i++) {
        printf("Right\n");
    }

    // Implementação de Movimentação do Bispo (5 casas em diagonal superior direita, usando WHILE)
    printf("\nBishop Movement (Novice Level):\n");
    const int bishopSteps = 5;
    int j = 1;
    while (j <= bishopSteps) {
        printf("Up Right\n");
        j++;
    }

    // Implementação de Movimentação da Rainha (8 casas para a esquerda, usando DO-WHILE)
    printf("\nQueen Movement (Novice Level):\n");
    const int queenSteps = 8;
    int k = 1;
    do {
        printf("Left\n");
        k++;
    } while (k <= queenSteps);


    // ================================
    // Nível Aventureiro - Movimentação do Cavalo
    // ================================
    printf("\nKnight Movement (Adventurer Level):\n");

    // Primeiro loop (2 casas para baixo, usando FOR)
    for (int i = 1; i <= 2; i++) {
        printf("Down\n");
    }

    // Segundo loop (1 casa para a esquerda, usando WHILE)
    int l = 1;
    while (l <= 1) {
        printf("Left\n");
        l++;
    }


    // ================================
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // ================================
    printf("\nRook Movement (Master Level - Recursive):\n");
    rookRecursive(5, 1);

    printf("\nBishop Movement (Master Level - Recursive):\n");
    bishopRecursive(5, 1);

    printf("\nQueen Movement (Master Level - Recursive):\n");
    queenRecursive(8, 1);

    knightMaster();

    return 0;
}
