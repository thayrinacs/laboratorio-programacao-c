// Aula 17 - 2a Questao
// Cadastro de produtos de uma loja de informatica (HARDWARE ou PERIFERICO).
#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[30];
    char categoria[20];
    char copia[30];
    char descricao[50] = "Produto: ";

    printf("Digite o nome do produto: ");
    scanf("%29s", produto);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    strcpy(copia, produto);
    strcat(descricao, copia);

    printf("\n--- Resumo do cadastro ---\n");
    printf("%s\n", descricao);
    printf("Quantidade de caracteres do nome: %zu\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: invalida\n");
    }

    return 0;
}
