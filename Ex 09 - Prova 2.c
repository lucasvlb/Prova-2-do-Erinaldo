//9. Escreva um programa que pe�a ao usu�rio para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a m�dia de duas provas. Se a m�dia for
//maior ou igual a 7.0, o aluno � aprovado. Se a m�dia estiver entre 5.0 e 6.9, o aluno
//vai para a recupera��o, e se for menor que 5.0, o aluno � reprovado. (0.4 ponto)
//Entrada: 10 notas (2 para cada aluno).
//Sa�da: m�dia de cada aluno e status (aprovado, recupera��o ou reprovado).


#include <stdio.h>

int main() {
    int numAlunos = 5;
    float nota1, nota2, media;

    //  vai processar cada aluno
    for (int i = 0; i < numAlunos; i++) { // i++ � um atalho para i = i + 1
        // Solicita as notas das duas provas para o aluno
        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &nota1);
        
        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &nota2);
        
        // Calcula a m�dia das duas provas
        media = (nota1 + nota2) / 2.0;

        // Exibe a m�dia e o status do aluno
        printf("Aluno %d - M�dia: %.2f - ", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else if (media >= 5.0 && media < 7.0) {
            printf("Recupera��o\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
