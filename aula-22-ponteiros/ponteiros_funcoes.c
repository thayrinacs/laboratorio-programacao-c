// Aula 22 - Questao 4
// A funcao dobrar() recebe o endereco de uma variavel e altera o valor original.
#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Valor original: %d\n", numero);
    dobrar(&numero);
    printf("Valor apos dobrar(): %d\n", numero);

    return 0;
}
