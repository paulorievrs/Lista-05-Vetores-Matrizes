#include <stdio.h>
#include <stdlib.h> // tem rand
#include <time.h> // tem time

int main() 
{
    srand(time(0));

    double VALOR_MAXIMO = 95.8;
    double VALOR_MINIMO = 30.7;

    double vetor[50];

    // [ 0, 1, 2, 3, 4, 5 ]

    for(int i = 0; i < 50; i++) {
        vetor[i] = (VALOR_MAXIMO - VALOR_MINIMO) * (double) rand() / (double) RAND_MAX + VALOR_MINIMO;
    }

    double soma_total = 0.0;

    for(int i = 0; i < 50; i++) {
        soma_total += vetor[i];
    }

    double media = soma_total / 50;

    int numerosAcimaDaMedia = 0;

    for(int i = 0; i < 50; i++) {

        if(vetor[i] > media) {
            numerosAcimaDaMedia++;
        }

    }

    printf("A quantidade de numeros acima da média é de: %d", numerosAcimaDaMedia);

}