//10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
//Para cada idade, o programa deve classificar a pessoa em uma das categorias:
//criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
//anos ou mais)

#include <stdio.h>

int main() {
    int idade;
    int numPessoas = 10;

    // Loop para processar cada idade inserida pelo usuário
    for (int i = 0; i < numPessoas; i++) {
        // Solicita a idade da pessoa
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        // Classifica a pessoa com base na idade
        printf("Pessoa %d - ", i + 1);

        if (idade >= 0 && idade <= 12) {
            printf("Criança\n");
        } else if (idade >= 13 && idade <= 17) {
            printf("Adolescente\n");
        } else if (idade >= 18 && idade <= 64) {
            printf("Adulto\n");
        } else if (idade >= 65) {
            printf("Idoso\n");
        } else {
            printf("Idade inválida\n");
        }
    }

    return 0;
}
