#include <stdio.h>
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "Portuguese");            //Localização do idioma PT-BR
    
    //VARIAVEIS
    
    float nota;                                 //Para a nota em FLOAT
    float notas[8];                             //Uma lista de 8 posições para inserir cada nota em formato FLOAT
    char notaFinal;                             //Usado para armazenar a nota em letra(char porque é apenas 1 character)
    
    for (int i = 1; i <= 8; i++) {              //Laço de 8 repetições para pedir as notas dos alunos 
        printf("Nota do %d° aluno: ", i);
        scanf("%f", &nota);
        notas[i - 1] = nota;                    //O que está em [] é a posição na lista, e sendo que uma lista começa com 0 e o i com 1, fica [i - 1]
    }
    
    for (int j = 1; j <= 8; j++) {              //Laço de 8 repetições para definir e imprimir as notas dos alunos
        
        nota = notas[j - 1];                    //Para não ter que colocar a lista e sua posição toda hora
        
        if (nota >= 9 && nota <= 10) {          //Verificação da nota para letra
            notaFinal = 'A';
        } else if (nota >= 7 && nota < 9) {
            notaFinal = 'B';
        } else if (nota >= 5 && nota < 7) {
            notaFinal = 'C';
        } else if (nota >= 3 && nota < 5) {
            notaFinal = 'D';
        } else if (nota < 3) {
            notaFinal = 'F';
        }
            
        printf("\nPor ter tirado %.1f\n\tO %d° aluno tirou %c\n", notas[j - 1], j, notaFinal);
    }

    return 0;
}
