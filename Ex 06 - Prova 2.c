#include <stdio.h>
#include <stdbool.h>
#include <math.h> // Para sqrt
#include <locale.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) return false; // Números menores ou iguais a 1 não são primos
    if (numero <= 3) return true;  // 2 e 3 são primos

    // Elimina múltiplos de 2 e 3 rapidamente
    if (numero % 2 == 0 || numero % 3 == 0) return false;

    // Verifica divisores de 5 até a raiz quadrada de numero
    for (int i = 5; i <= sqrt(numero); i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Suporte ao idioma português

    int valorInicial, valorFinal;

    // Solicitar os valores inicial e final ao usuário
    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf("Digite o valor final: ");
    scanf("%d", &valorFinal);

    // Validar se os valores são positivos e o inicial é menor ou igual ao final
    if (valorInicial <= 0 || valorFinal <= 0 || valorInicial > valorFinal) {
        printf("Valores inválidos. Certifique-se de que os valores são positivos e o valor inicial é menor ou igual ao valor final.\n");
        return 1; // Indicar que houve um erro
    }

    bool encontrouPrimo = false;

    printf("Números primos entre %d e %d são: ", valorInicial, valorFinal);
    for (int i = valorInicial; i <= valorFinal; ++i) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            encontrouPrimo = true;
        }
    }

    if (!encontrouPrimo) {
        printf("Nenhum número primo encontrado no intervalo fornecido.");
    }

    printf("\n");

    return 0;
}

