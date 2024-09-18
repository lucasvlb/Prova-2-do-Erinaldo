#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
        return 1;  // Retorna 1 para indicar que o programa terminou com erro
    }

    
    for (int i = 1; i < numero; i++) {
        
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (soma_divisores == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
