#include <stdio.h>

// Constantes para definir o número de casas que cada peça pode se mover
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV 1 // Número de movimentos em L (1 vez para cima e à direita)

// Função recursiva para movimentação do Bispo
void movimentarBispo(int passo) {
    if (passo > BISPO_MOV) return; // Condição de parada
    printf("Diagonal Superior Direita - Passo %d\n", passo);
    movimentarBispo(passo + 1); // Chamada recursiva
}

// Função recursiva para movimentação da Torre
void movimentarTorre(int passo) {
    if (passo > TORRE_MOV) return; // Condição de parada
    printf("Direita - Passo %d\n", passo);
    movimentarTorre(passo + 1); // Chamada recursiva
}

// Função recursiva para movimentação da Rainha
void movimentarRainha(int passo) {
    if (passo > RAINHA_MOV) return; // Condição de parada
    printf("Esquerda - Passo %d\n", passo);
    movimentarRainha(passo + 1); // Chamada recursiva
}

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    movimentarBispo(1);

    // Movimentação da Torre (para a direita)
    printf("\nMovimentação da Torre:\n");
    movimentarTorre(1);

    // Movimentação da Rainha (para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    movimentarRainha(1);

    // Movimentação do Cavalo (em L)
    printf("\nMovimentação do Cavalo:\n");
    for (int i = 1, j = 1; i <= CAVALO_MOV && j <= CAVALO_MOV; i++, j++) {
        printf("Cima - Passo %d\n", i);
        if (i == CAVALO_MOV) {
            printf("Direita - Passo %d\n", j);
            break; // Finaliza o loop após o movimento em L
        }
    }

    return 0;
}
