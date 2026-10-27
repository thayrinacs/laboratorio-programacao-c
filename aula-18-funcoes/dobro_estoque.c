// Aula 18 - 4a Questao
// Calcula a quantidade de produtos apos duplicar o estoque.
#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int quantidadeInicial;

    printf("Digite a quantidade inicial do estoque: ");
    scanf("%d", &quantidadeInicial);

    printf("Quantidade inicial: %d\n", quantidadeInicial);
    printf("Quantidade final: %d\n", dobro(quantidadeInicial));

    return 0;
}
