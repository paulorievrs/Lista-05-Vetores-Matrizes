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

    int inverso[n];

    int j = 0;

    for(int i = n - 1; i >= 0; i--) {
        inverso[j] = X[i];
        j++;
    }


    printf("O vetor X tem valores: [ ");
    for(int i = 0; i < n; i++) {
        printf("%d, ", X[i]);
    }
    printf("]\n");

    printf("O vetor inverso tem valores: [ ");
    for(int i = 0; i < n; i++) {
        printf("%d, ", inverso[i]);
    }
    printf("]\n");



}