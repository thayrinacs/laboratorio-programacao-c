// Aula 14 - Atividade 3
// Criar uma matriz 3x3, somar todos os seus elementos e apresentar o resultado.
#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    printf("Soma de todos os elementos: %d\n", soma);

    return 0;
}
