#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];     // Nome do território
    char cor[10];      // Cor do exército
    int tropas;        // Quantidade de tropas
} Territorio;

int main() {
    Territorio territorios[5]; // Vetor para armazenar até 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n");

    // Laço para cadastrar 5 territórios
    for (i = 0; i < 5; i++) {
        printf("\nCadastro do Território %d\n", i + 1);

        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados após cadastro
    printf("\n=== Territórios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}