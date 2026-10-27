// Aula 18 - 2a Questao
// Compara os precos de dois produtos utilizando a funcao maiorPreco().
#include <stdio.h>

float maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        return preco1;
    }
    return preco2;
}

int main(void) {
    float preco1, preco2;

    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &preco1);
    printf("Digite o preco do segundo produto: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("Maior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}
