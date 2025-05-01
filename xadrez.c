#include <stdio.h>

// Constantes para definir o número de casas que cada peça pode se mover
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Diagonal Superior Direita - Passo %d\n", i);
    }

    // Movimentação da Torre (para a direita)
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= TORRE_MOV; i++) {
        printf("Direita - Passo %d\n", i);
    }

    // Movimentação da Rainha (para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    for (int i = 1; i <= RAINHA_MOV; i++) {
        printf("Esquerda - Passo %d\n", i);
    }

    return 0;
}
