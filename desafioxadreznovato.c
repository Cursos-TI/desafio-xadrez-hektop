#include <stdio.h>

// MOVIMENTO DA TORRE 5 CASAS PARA DIREITA

void moverTorre() {
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

// MOVIMENTO DO BISPO 5 CASAS NA DIAGONAL

void moverBispo() {
    int i = 0;
    while (i < 5) {
        printf("Cima, direita\n");
        i++;
    }
}

// MOVIMENTO DA RAINHA EM 8 CASAS

void moverRainha() {
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
}
int main() {
    printf("=== Nível Novato ===\n");
    printf("Movimente a torre:\n");
    moverTorre();
    
    printf("\nMovimente o bispo:\n");
    moverBispo();
    
    printf("\nMovimente a rainha:\n");
    moverRainha();
    
    return 0;
}