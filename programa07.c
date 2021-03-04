#include <stdio.h>
#include <stdlib.h> // tem rand
#include <stdbool.h>

int main()
{
    int n = 0;
    
    int sorteados[6];
    bool acertou = true;

    printf("\nDigite os numeros sorteados: ");
    for(int i = 0; i < 6; i++) {
        printf("Valor: ");
        scanf("%d", &sorteados[i]);
    }

    printf("\nDigite o numero de participantes: ");
    scanf("%d", &n);

    int participantes[n][6];

    for(int i = 0; i < n; i++) {
        printf("\nDigite os 6 numeros do participante: %d", i + 1);
        for(int j = 0; j < 6; j++) {
            scanf("%d", &participantes[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) {

            if(sorteados[j] != participantes[i][j]) {
                acertou = false;
                j = 6;
                i = n;
            }

        }

        if(acertou) {
            printf("\nO Jogador de numero: %d acertou", i + 1);
        }

    }




}