//9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
//maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
//vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. (0.4 ponto)
//Entrada: 10 notas (2 para cada aluno).
//Saída: média de cada aluno e status (aprovado, recuperação ou reprovado).


#include <stdio.h>

int main() {
    int numAlunos = 5;
    float nota1, nota2, media;

    //  vai processar cada aluno
    for (int i = 0; i < numAlunos; i++) { // i++ é um atalho para i = i + 1
        // Solicita as notas das duas provas para o aluno
        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &nota1);
        
        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &nota2);
        
        // Calcula a média das duas provas
        media = (nota1 + nota2) / 2.0;

        // Exibe a média e o status do aluno
        printf("Aluno %d - Média: %.2f - ", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else if (media >= 5.0 && media < 7.0) {
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
