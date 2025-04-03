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

// MOVIMENTO DO CAVALO EM L
void moverCavalo() {
    for (int i = 0; i < 1; i++) {
        printf("Baixo\n");
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }
}
int main() {
    printf("=== Nível Novato ===\n");
    printf("Movimente a torre:\n");
    moverTorre();
    
    printf("\nMovimente o bispo:\n");
    moverBispo();
    
    printf("\nMovimente a rainha:\n");
    moverRainha();
    
    printf("\n=== Nível Aventureiro ===\n");
    printf("Movimente o cavalo:\n");
    moverCavalo();
    return 0;

    printf("\n=== Nível Mestre ===\n");
    printf("Movimente a torre:\n");
    moverTorre(5);
    
    printf("\nMovimente o bispo:\n");
    moverBispo(5);
    
    printf("\nMovimente a rainha:\n");
    moverRainha(8);
    
    printf("\nMovimente o cavalo:\n");
    moverCavalo(2);
    
    
}

