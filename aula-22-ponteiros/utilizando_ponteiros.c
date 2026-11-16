// Aula 22 - Questao 2
// Variavel com valor 20 e um ponteiro que guarda o seu endereco.
#include <stdio.h>

int main(void) {
    int valor = 20;
    int *ptr = &valor;

    printf("Valor da variavel: %d\n", valor);
    printf("Endereco da variavel: %p\n", (void *) &valor);
    printf("Endereco guardado no ponteiro: %p\n", (void *) ptr);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}
