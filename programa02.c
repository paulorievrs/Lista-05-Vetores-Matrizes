#include <stdio.h>
#include <stdlib.h> // tem rand
#include <time.h> // tem time

int main() 
{
    srand(time(0));

    int n = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int X[n];

    for(int i = 0; i < n; i++) {
        X[i] = rand();
    }

    int maiorValor = X[0];

    for(int i = 1; i < n; i++) {
        if(X[i] > maiorValor) {
            maiorValor = X[i];
        }
    }

    printf("O maior valor é %d", maiorValor);
}