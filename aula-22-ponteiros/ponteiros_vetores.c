// Aula 22 - Questao 5
// Percorre um vetor de 5 inteiros usando um ponteiro.
#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;  // o nome do vetor ja e o endereco do primeiro elemento
    int i;

    printf("Elementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
