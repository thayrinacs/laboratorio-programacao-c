// Aula 21 - Questao 3
// Usa a struct Funcionario para cadastrar ate 5 funcionarios, acrescentar os dados
// em funcionarios.txt (sem apagar os anteriores) e depois listar tudo o que esta no arquivo.
#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    char linha[100];
    int quantidade, i, total = 0;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &quantidade);
    } while (quantidade < 1 || quantidade > 5);

    // "a" (append) acrescenta no final do arquivo sem apagar o que ja existe
    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para gravacao.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        // separa os campos com ';' para o nome poder ter espacos
        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);
    printf("\nDados gravados com sucesso!\n");

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\n--- FUNCIONARIOS CADASTRADOS ---\n");
    // le o arquivo linha por linha; linhas fora do formato nome;salario;horas sao ignoradas
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (sscanf(linha, "%49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
            total++;
            printf("%d) Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
                   total, f.nome, f.salario, f.horasExtras);
        }
    }

    if (total == 0) {
        printf("Nenhum funcionario encontrado no arquivo.\n");
    }

    fclose(arquivo);

    return 0;
}
