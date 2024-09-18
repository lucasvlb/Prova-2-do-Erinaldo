#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Função para inverter uma string (já que strrev não é padrão em C)
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Função para converter um número decimal para a base desejada
void converterParaBase(int numeroDecimal, int base) {
    const char DIGITOS[] = "0123456789ABCDEF";
    char resultado[65]; // Suporte para bases até 64 bits
    int indice = 0;

    // Caso especial para o número 0
    if (numeroDecimal == 0) {
        printf("0");
        return;
    }

    // Conversão do número decimal para a base desejada
    while (numeroDecimal > 0) {
        int resto = numeroDecimal % base;
        resultado[indice++] = DIGITOS[resto];
        numeroDecimal /= base;
    }
    resultado[indice] = '\0'; // Termina a string com '\0'

    // Inverter o resultado para obter a ordem correta
    reverseString(resultado);

    // Exibir o resultado
    printf("%s", resultado);
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Suporte para caracteres especiais

    int numeroDecimal;
    int base;

    // Solicitar o número decimal e a base ao usuário
    printf("Digite um número decimal: ");
    scanf("%d", &numeroDecimal);
    printf("Digite a base de conversão (entre 2 e 16): ");
    scanf("%d", &base);

    // Validar a base
    if (base < 2 || base > 16) {
        printf("Base inválida. Deve estar entre 2 e 16.\n");
        return 1; // Indicar que houve um erro
    }

    // Converter e exibir o número
    printf("Número convertido para a base %d: ", base);
    converterParaBase(numeroDecimal, base);
    printf("\n");

    return 0;
}

