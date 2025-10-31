#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int n) {
    if (n == 0) return; // Caso base
    printf("Direita\n");
    moverTorre(n - 1); // Chamada recursiva
}

// Função recursiva para mover a Rainha
void moverRainha(int n) {
    if (n == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(n - 1); // Chamada recursiva
}

// Função recursiva e com loops aninhados para mover o Bispo
void moverBispo(int movimentos) {
    if (movimentos == 0) return; // Caso base

    // Loop externo: movimento vertical
    for (int i = 0; i < 1; i++) { 
        printf("Cima\n");
        // Loop interno: movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(movimentos - 1); // Chamada recursiva
}

int main() {
    printf("=== Movendo Torre para a direita ===\n");
    moverTorre(5);

    printf("\n=== Movendo Bispo para cima e para a direita ===\n");
    moverBispo(5);

    printf("\n=== Movendo Rainha para a esquerda ===\n");
    moverRainha(8);

    printf("\n=== Movendo Cavalo em L ===\n");
    
    // Movimento do Cavalo (duas casas para cima e uma para direita)
    for (int i = 0; i < 3; i++) { // Repete 3 movimentos
        for (int cima = 0, direita = 0; cima < 2 || direita < 1; cima++) {
            if (cima < 2) {
                printf("Cima\n");
                continue; // Continua até subir duas vezes
            }
            if (direita < 1) {
                printf("Direita\n");
                direita++;
                break; // Sai do loop após mover para direita
            }
        }
    }

    printf("\n=== Fim dos movimentos ===\n");
    return 0;
}
