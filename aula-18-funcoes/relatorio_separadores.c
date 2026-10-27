// Aula 18 - 5a Questao
// Apresenta um relatorio com separadores visuais usando exibirLinha().
#include <stdio.h>

void exibirLinha(void) {
    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    exibirLinha();
    printf("RELATORIO\n");
    exibirLinha();

    return 0;
}
