#include <stdio.h>
#include <math.h>  // Para a função pow()

int main() {
    // Declaração de variáveis
    double valor_inicial, taxa_juros, valor_final;
    int anos;

    // Solicita ao usuário o valor inicial do investimento
    printf("Digite o valor inicial do investimento: ");
    scanf("%lf", &valor_inicial);

    // Solicita ao usuário a taxa de juros anual (em porcentagem)
    printf("Digite a taxa de juros anual (em porcentagem): ");
    scanf("%lf", &taxa_juros);

    // Solicita ao usuário o número de anos
    printf("Digite o número de anos que o dinheiro será investido: ");
    scanf("%d", &anos);

    // Converte a taxa de juros de porcentagem para decimal
    taxa_juros = taxa_juros / 100;

    // Imprime o cabeçalho da tabela
    printf("\nAno\tValor Acumulado\n");
    printf("---------------------\n");

    // Loop para calcular e exibir o valor acumulado ano a ano
    for (int ano = 1; ano <= anos; ano++) {
        // Calcula o valor final usando a fórmula de juros compostos
        valor_final = valor_inicial * pow((1 + taxa_juros), ano);

        // Exibe o ano e o valor acumulado
        printf("%d\t%.2lf\n", ano, valor_final);
    }

    return 0;
}
