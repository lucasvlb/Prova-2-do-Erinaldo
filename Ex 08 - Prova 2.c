//8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
//tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
//maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
//para acertar. No final, informe se o usuário acertou ou não. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 7;
    int acertou = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Sorteia um número entre 1 e 100
    numeroSorteado = rand() % 100 + 1;

    printf("Tente adivinhar o número (entre 1 e 100). Você tem %d tentativas.\n", tentativas);

    // Loop para as tentativas do usuário
    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        // Verifica o palpite do usuário e da dica ao usuario
        if (palpite < numeroSorteado) {
            printf("O número sorteado é maior que %d.\n", palpite);
        } else if (palpite > numeroSorteado) {
            printf("O número sorteado é menor que %d.\n", palpite);
        } else {
            printf("Parabéns! Você acertou o número %d!\n", numeroSorteado);
            acertou = 1;
            break;
        }
    }

    // Mensagem final caso o usuário não tenha acertado
    if (!acertou) {
        printf("Você esgotou suas tentativas. O número sorteado era %d.\n", numeroSorteado);
    }

    return 0;
}
