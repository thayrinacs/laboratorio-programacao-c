// Aula 22 - Questao 3
// Usa um ponteiro para alterar o valor de uma variavel de 15 para 50.
#include <stdio.h>

int main(void) {
    int numero = 15;
    int *ptr = &numero;

    printf("Valor antes da alteracao: %d\n", numero);

    *ptr = 50;

    printf("Valor depois da alteracao: %d\n", numero);

    return 0;
}
