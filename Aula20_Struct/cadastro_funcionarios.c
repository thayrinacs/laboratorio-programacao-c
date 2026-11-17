// Aula 20 - Struct
// Cadastra dois funcionarios e identifica qual possui o maior salario.
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1, funcionario2;
    float diferenca;

    // Leitura dos dados do funcionario 1
    printf("=== Cadastro do Funcionario 1 ===\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);

    // Leitura dos dados do funcionario 2
    printf("\n=== Cadastro do Funcionario 2 ===\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    // Apresentacao dos dados cadastrados
    printf("\n=== Dados Cadastrados ===\n");
    printf("Funcionario 1: %s | Idade: %d | Salario: R$ %.2f\n",
           funcionario1.nome, funcionario1.idade, funcionario1.salario);
    printf("Funcionario 2: %s | Idade: %d | Salario: R$ %.2f\n",
           funcionario2.nome, funcionario2.idade, funcionario2.salario);

    // Comparacao dos salarios
    printf("\n=== Resultado ===\n");
    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("%s possui o maior salario: R$ %.2f\n",
               funcionario1.nome, funcionario1.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("%s possui o maior salario: R$ %.2f\n",
               funcionario2.nome, funcionario2.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario: R$ %.2f\n",
               funcionario1.salario);
    }

    return 0;
}
