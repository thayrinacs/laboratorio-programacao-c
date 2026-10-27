// Aula 18 - 6a Questao
// Calcula o fatorial de um numero inteiro entre 0 e 12.
#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 2; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Numero invalido. Digite um valor entre 0 e 12.\n");
    } else {
        printf("%d! = %d\n", numero, calcularFatorial(numero));
    }

    return 0;
}
