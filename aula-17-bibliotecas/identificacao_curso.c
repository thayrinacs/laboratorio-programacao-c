// Aula 17 - 3a Questao
// Identifica o curso do estudante (CC ou SI) e gera uma mensagem personalizada.
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[30];
    char codigo[5];
    char copiaNome[30];
    char mensagem[50] = "Ola, ";

    printf("Digite seu primeiro nome: ");
    scanf("%29s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%4s", codigo);

    strcpy(copiaNome, nome);
    strcat(mensagem, copiaNome);
    strcat(mensagem, "!");

    printf("\nEstudante: %s\n", copiaNome);
    printf("Quantidade de caracteres do nome: %zu\n", strlen(nome));

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: codigo invalido\n");
    }

    printf("%s\n", mensagem);

    return 0;
}
