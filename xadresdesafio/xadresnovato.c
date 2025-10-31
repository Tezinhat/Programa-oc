#include <stdio.h>

int main() {
    printf("Movendo Torre para direita 5 vezes:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Direita\n");
    }
    printf("Movendo Bispo para cima e para direita 5 vezes:\n");
        for (int i = 0; i < 5; i++) 
    {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("Movendo Rainha para a esquerda 8 vezes:\n");
        for (int i = 0; i < 8; i++) 
    {
        printf("Esquerda\n");
    }

    return 0;
}