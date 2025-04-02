#include <stdio.h>
    int main(){
        int torre = 2, rainha = 5, bispo = 3;

        printf("Movimente a torre: \n");
        
        for ( torre = 0; torre < 5; torre++)
        {
            printf("Direita\n");

        
        }

        printf("Movimente o bispo: \n");
        while (bispo < 5)

            {
               printf("Cima, direita\n");

               bispo++;
            }
        printf("Movimente a rainha: \n");
        
        do
        {
            printf("Esquerda\n");
            rainha++;
        } while (rainha < 8);
            

            
        return 0;

    }