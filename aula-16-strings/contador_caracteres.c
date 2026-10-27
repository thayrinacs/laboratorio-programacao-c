// Aula 16 - Desafio: contador de caracteres
// Recebe uma palavra e conta seus caracteres com for, sem utilizar strlen.
#include <stdio.h>

int main(void) {
    char palavra[50];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra \"%s\" possui %d letras.\n", palavra, contador);

    return 0;
}
