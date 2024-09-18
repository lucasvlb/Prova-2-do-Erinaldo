//7. Crie um programa que pe�a ao usu�rio para inserir as notas de 5 alunos. Para
//cada aluno, o programa deve calcular a m�dia. Se a m�dia for maior ou igual a 7.0,
//o aluno � aprovado; caso contr�rio, ele � reprovado. Ao final, o programa deve exibir
//a m�dia de cada aluno e se ele foi aprovado ou reprovado.
#include <stdio.h>

int main() {
    // N�mero de alunos
    int numAlunos = 5;
    
    // Vari�veis para armazenar as notas e m�dias
    float notas[numAlunos];
    float media;
    
    // La�o para pegar as notas dos alunos
    for(int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);// %f � utilizado para formatar a sa�da de um n�mero de ponto flutuante.
    }

    // La�o para calcular a m�dia e verificar a aprova��o
    for(int i = 0; i < numAlunos; i++) {
        // Aqui assumimos que a nota fornecida � a �nica nota do aluno,
        // ent�o a m�dia � simplesmente a pr�pria nota.
        media = notas[i];
        
        // Exibir a m�dia e o status de aprova��o
        printf("Aluno %d - M�dia: %.2f - ", i + 1, media);
        if(media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
    
    return 0;
}
