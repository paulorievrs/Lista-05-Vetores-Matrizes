#include <stdio.h>

int main() 
{
    // Pegando o valor do teclado do tamanho da matriz
    int n = 0;
    printf("Digite o tamanho de N: ");
    scanf("%d", &n);
    //

    // Pegando o valor do teclado do tamanho da matriz
    int m = 0;
    printf("Digite o tamanho de M: ");
    scanf("%d", &m);
    //

    int A[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            printf("Digite o valor A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);

        }
    }

    int B[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            printf("Digite o valor B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);

        }
    }

    int flag = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            
          if(A[i][j] != B[i][j]) {
            flag = 0;
            j = m;
            i = n;
          }

        }
    }

    if(flag == 1) {
        printf("As matrizes são iguais");
    } else {
        printf("As matrizes são diferentes");

    }
}