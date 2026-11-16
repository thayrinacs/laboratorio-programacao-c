// Aula 22 - Questao 1
// Le um numero inteiro e mostra seu valor e seu endereco de memoria.
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Valor: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void *) &numero);

    return 0;
}
