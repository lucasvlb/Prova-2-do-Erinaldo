//7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para
//cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
//o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
//a média de cada aluno e se ele foi aprovado ou reprovado.
#include <stdio.h>

int main() {
    // Número de alunos
    int numAlunos = 5;
    
    // Variáveis para armazenar as notas e médias
    float notas[numAlunos];
    float media;
    
    // Laço para pegar as notas dos alunos
    for(int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);// %f é utilizado para formatar a saída de um número de ponto flutuante.
    }

    // Laço para calcular a média e verificar a aprovação
    for(int i = 0; i < numAlunos; i++) {
        // Aqui assumimos que a nota fornecida é a única nota do aluno,
        // então a média é simplesmente a própria nota.
        media = notas[i];
        
        // Exibir a média e o status de aprovação
        printf("Aluno %d - Média: %.2f - ", i + 1, media);
        if(media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
    
    return 0;
}
