// Aula 17 - 1a Questao
// Cadastro de usuario com identificacao do perfil de acesso (ADMIN ou COMUM).
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[30];
    char perfil[20];
    char confirmacao[30];
    char mensagem[60] = "Bem-vindo(a), ";

    printf("Digite seu primeiro nome: ");
    scanf("%29s", nome);

    printf("Digite o perfil de acesso (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    strcpy(confirmacao, nome);
    strcat(mensagem, nome);
    strcat(mensagem, "!");

    printf("\n--- Dados cadastrados ---\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres do nome: %zu\n", strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Usuario comum\n");
    } else {
        printf("Perfil: invalido\n");
    }

    printf("%s\n", mensagem);

    return 0;
}
