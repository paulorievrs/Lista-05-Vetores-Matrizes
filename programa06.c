#include <stdio.h>
#include <stdlib.h> // tem rand
#include <time.h> // tem time

int main() 
{   
    srand(time(0));
    // Pegando o valor do teclado do tamanho da matriz
    int n = 0;
    printf("Digite o tamanho de N: ");
    scanf("%d", &n);
    //

    int X[n];
    int Y[n];

    for(int i = 0; i < n; i++) {
        X[i] = rand() % 100; // 0 - 100
        Y[i] = rand() % 100;
    }

    int tamanhoZ = n * 2;

    int Z[tamanhoZ];

    int j = 0;
    int k = 0;

    for(int i = 0; i < tamanhoZ; i++) {
        if(i % 2 == 0) {
            Z[i] = X[j];
            j++;
        } else {
            Z[i] = Y[k];
            k++;
        }
    }

        
    printf("\nO vetor X tem valores: [ ");
    for(int i = 0; i < n; i++) {
        printf("%d, ", X[i]);
    }
    printf("]\n");   

    printf("\nO vetor Y tem valores: [ ");
    for(int i = 0; i < n; i++) {
        printf("%d, ", Y[i]);
    }
    printf("]\n"); 

    printf("\nO vetor Z tem valores: [ ");
    for(int i = 0; i < tamanhoZ; i++) {
        printf("%d, ", Z[i]);
    }
    printf("]\n");
 
}   