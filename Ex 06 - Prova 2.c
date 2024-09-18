#include <stdio.h>
#include <stdbool.h>
#include <math.h> // Para sqrt
#include <locale.h>

// Fun��o para verificar se um n�mero � primo
bool ehPrimo(int numero) {
    if (numero <= 1) return false; // N�meros menores ou iguais a 1 n�o s�o primos
    if (numero <= 3) return true;  // 2 e 3 s�o primos

    // Elimina m�ltiplos de 2 e 3 rapidamente
    if (numero % 2 == 0 || numero % 3 == 0) return false;

    // Verifica divisores de 5 at� a raiz quadrada de numero
    for (int i = 5; i <= sqrt(numero); i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Suporte ao idioma portugu�s

    int valorInicial, valorFinal;

    // Solicitar os valores inicial e final ao usu�rio
    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf("Digite o valor final: ");
    scanf("%d", &valorFinal);

    // Validar se os valores s�o positivos e o inicial � menor ou igual ao final
    if (valorInicial <= 0 || valorFinal <= 0 || valorInicial > valorFinal) {
        printf("Valores inv�lidos. Certifique-se de que os valores s�o positivos e o valor inicial � menor ou igual ao valor final.\n");
        return 1; // Indicar que houve um erro
    }

    bool encontrouPrimo = false;

    printf("N�meros primos entre %d e %d s�o: ", valorInicial, valorFinal);
    for (int i = valorInicial; i <= valorFinal; ++i) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            encontrouPrimo = true;
        }
    }

    if (!encontrouPrimo) {
        printf("Nenhum n�mero primo encontrado no intervalo fornecido.");
    }

    printf("\n");

    return 0;
}

