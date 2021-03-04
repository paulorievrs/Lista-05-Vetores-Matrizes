#include <stdio.h>

int main() 
{
    // PEgando o valor do teclado do tamanho do vetor
    int n = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    //


    //Declarando os vetores das materias que contém as matriculas
    int PC1[n];
    int CALCULO[n];
    //

    //Pegando os valores do teclado das matriculas das materias

    // Materia PC1
    printf("\nOs alunos matriculados em PC1 são: ");
    for(int i = 0; i < n; i++) {
        printf("\nMatricula: ");

        scanf("%d", &PC1[i]);
    }

    //Materia CALCULO
    printf("\nOs alunos matriculados em CALCULO são: ");
    for(int i = 0; i < n; i++) {
        printf("\nMatricula: ");
        scanf("%d", &CALCULO[i]);
    }
    //


    printf("\nOs alunos matriculados na mesma matéria são: ");
    
    // PC1[0] = 1, PC1[1] = 2; PC1[2] = 3 // PC1[1] == CALCULO[] || PC1[1] == CALCULO[1] || PC1[2] == CALCULO[2]

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(PC1[i] == CALCULO[j]) {
                printf("\nMatricula: %d ", PC1[i]);
            }
        }
    }
    

}
