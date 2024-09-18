#include <stdio.h>
#include <stdbool.h>
#include <locale.h>


void tela(int *valor1, int *valor2) {

	printf("Digite o primeiro valor: ");
	scanf("%d", valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", valor2);
}

int main() {

    setlocale(LC_ALL, "Portuguese");
    
	int opt, valor1, valor2;
	bool menu = true;

	do {
		printf("\n\nCALCULADORA CASIO S0-C0NFIA (definitivamente original)\n");
		printf("Qual tipo de conta gostaria de fazer?\n");
		printf("{1} SOMA\n{2} SUBTRAÇÃO\n{3} MULTIPLICAÇÃO\n{4} DIVISÃO\n{5} Sair\n");
		printf("Digite sua escolha (apenas numeros): ");
		scanf("%d", &opt);

		switch(opt) {
			int resultado;
		case 1:
			tela(&valor1, &valor2);
			resultado = valor1 + valor2;
			printf("\n%d + %d = %d", valor1, valor2, resultado);
			break;
		case 2:
			tela(&valor1, &valor2);
			resultado = valor1 - valor2;
			printf("\n%d - %d = %d", valor1, valor2, resultado);
			break;

		case 3:
			tela(&valor1, &valor2);
			resultado = valor1 * valor2;
			printf("\n%d x %d = %d", valor1, valor2, resultado);
			break;

		case 4:
			tela(&valor1, &valor2);
			if (valor2 != 0) {
				resultado = valor1 / valor2;
				printf("\n%d C7 %d = %d", valor1, valor2, resultado);
			} else {
				printf("Erro: divisC#o por zero");
			}
			break;
		case 5:
			printf("\nFinalizando");
			menu = false;
			break;

		default:
			printf("\nOpC'C#o invC!lida");
			main();
			break;
		}
	} while (menu == true);

	return 0;

}