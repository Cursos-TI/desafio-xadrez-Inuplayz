#include <stdio.h>

// =============================
// Funções recursivas
// =============================

// Torre: 5 casas para a direita (recursiva)
void rookRecursive(int steps, int current) {
    if (current > steps) return; // condição de parada
    printf("Right\n");
    rookRecursive(steps, current + 1); // chamada recursiva
}

// Bispo: 5 casas na diagonal superior direita (recursiva)
void bishopRecursive(int steps, int current) {
    if (current > steps) return; // condição de parada
    printf("Up Right\n");
    bishopRecursive(steps, current + 1);
}

// Rainha: 8 casas para a esquerda (recursiva)
void queenRecursive(int steps, int current) {
    if (current > steps) return; // condição de parada
    printf("Left\n");
    queenRecursive(steps, current + 1);
}

// =============================
// Bispo com loops aninhados
// =============================
// Loop externo = movimento vertical (cima)
// Loop interno = movimento horizontal (direita)
void bishopNested(int steps) {
    for (int up = 1; up <= steps; up++) {           // vertical
        for (int right = 1; right <= 1; right++) {  // horizontal
            printf("Up Right\n");
        }
    }
}

// =============================
// Cavalo com loops complexos
// =============================
// Movimento em L: 2 para cima + 1 para a direita
void knightComplex() {
    printf("\nKnight Movement (Complex Loops):\n");

    for (int up = 1, right = 0; up <= 2; up++) {
        printf("Up\n");

        if (up < 2) {
            continue; // só vai para a direita depois dos 2 movimentos para cima
        }

        // agora, quando up == 2, faz o movimento para a direita
        for (right = 1; right <= 2; right++) {
            if (right == 1) {
                printf("Right\n");
                break; // sai após uma casa para a direita
            }
        }
    }
}

// =============================
// Função principal
// =============================
int main() {
    // Torre recursiva
    printf("Rook Movement (Recursive):\n");
    rookRecursive(5, 1);

    // Bispo recursivo
    printf("\nBishop Movement (Recursive):\n");
    bishopRecursive(5, 1);

    // Rainha recursiva
    printf("\nQueen Movement (Recursive):\n");
    queenRecursive(8, 1);

    // Bispo com loops aninhados
    printf("\nBishop Movement (Nested Loops):\n");
    bishopNested(5);

    // Cavalo com loops complexos
    knightComplex();

    return 0;
}
