#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Fun��o para inverter uma string (j� que strrev n�o � padr�o em C)
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Fun��o para converter um n�mero decimal para a base desejada
void converterParaBase(int numeroDecimal, int base) {
    const char DIGITOS[] = "0123456789ABCDEF";
    char resultado[65]; // Suporte para bases at� 64 bits
    int indice = 0;

    // Caso especial para o n�mero 0
    if (numeroDecimal == 0) {
        printf("0");
        return;
    }

    // Convers�o do n�mero decimal para a base desejada
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

    // Solicitar o n�mero decimal e a base ao usu�rio
    printf("Digite um n�mero decimal: ");
    scanf("%d", &numeroDecimal);
    printf("Digite a base de convers�o (entre 2 e 16): ");
    scanf("%d", &base);

    // Validar a base
    if (base < 2 || base > 16) {
        printf("Base inv�lida. Deve estar entre 2 e 16.\n");
        return 1; // Indicar que houve um erro
    }

    // Converter e exibir o n�mero
    printf("N�mero convertido para a base %d: ", base);
    converterParaBase(numeroDecimal, base);
    printf("\n");

    return 0;
}

