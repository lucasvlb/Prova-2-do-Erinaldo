//8. Escreva um programa que sorteie um n�mero entre 1 e 100 e permita ao usu�rio
//tentar adivinhar o n�mero. O programa deve dar dicas se o n�mero sorteado �
//maior ou menor que o palpite do usu�rio. O usu�rio tem no m�ximo 7 tentativas
//para acertar. No final, informe se o usu�rio acertou ou n�o. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 7;
    int acertou = 0;

    // Inicializa o gerador de n�meros aleat�rios
    srand(time(NULL));

    // Sorteia um n�mero entre 1 e 100
    numeroSorteado = rand() % 100 + 1;

    printf("Tente adivinhar o n�mero (entre 1 e 100). Voc� tem %d tentativas.\n", tentativas);

    // Loop para as tentativas do usu�rio
    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        // Verifica o palpite do usu�rio e da dica ao usuario
        if (palpite < numeroSorteado) {
            printf("O n�mero sorteado � maior que %d.\n", palpite);
        } else if (palpite > numeroSorteado) {
            printf("O n�mero sorteado � menor que %d.\n", palpite);
        } else {
            printf("Parab�ns! Voc� acertou o n�mero %d!\n", numeroSorteado);
            acertou = 1;
            break;
        }
    }

    // Mensagem final caso o usu�rio n�o tenha acertado
    if (!acertou) {
        printf("Voc� esgotou suas tentativas. O n�mero sorteado era %d.\n", numeroSorteado);
    }

    return 0;
}
