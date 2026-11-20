// Aula 20 - Struct
// Cadastro de dois funcionarios e comparacao de salario

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1, funcionario2;
    float diferenca;

    printf("Funcionario 1\n");
    printf("Nome: ");
    scanf(" %[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\nFuncionario 2\n");
    printf("Nome: ");
    scanf(" %[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    // mostrando os dados
    printf("\nDados cadastrados:\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: %.2f\n", funcionario1.salario);

    printf("\nNome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: %.2f\n", funcionario2.salario);

    // comparando os salarios
    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("\n%s tem o maior salario\n", funcionario1.nome);
        printf("Diferenca: %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("\n%s tem o maior salario\n", funcionario2.nome);
        printf("Diferenca: %.2f\n", diferenca);
    } else {
        printf("\nOs dois funcionarios recebem o mesmo salario\n");
    }

    return 0;
}
