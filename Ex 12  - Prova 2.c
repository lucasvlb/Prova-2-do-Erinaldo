#include <stdio.h>
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "Portuguese");            //Localização do idioma PT-BR

    //VARIÁVEIS
    
    int num;                                    //  INT para os numeros
    int numLista[6];                            //  Lista de 6 espaços para variáveis INT
    
    for (int i = 1; i <= 6; i++) {              //  Laço de 6 repetições
        printf("Informe o %d° numero: ", i);    
        scanf("%d", &num);
        numLista[i - 1] = num;                  //  O [] é a posição da lista, e sendo que listas começam
                                                //  com 0 e o i já começa com o 1, então fica [i - 1]
                                                //  para ser 0 na primeira repetição;
    }
    
    for (int j = 1; j <= 6; j++){               //  Laço de 6 repetições
        
        num = numLista[j - 1];                  //  Para deixar mais simples
        
        if (num%2 == 1) {                                                   //  Checar se é impar
            if(num < 50) {
                printf("\nO numero %d é impar e menor do que 50", num);     //  Checar se é menor que 50
            } else {
                printf("\nO numero %d é impar e maior do que 50", num);     //  Checar se é maior que 50
            }
        } else {                                                            //  O Resto é par
            if(num > 10) {
                printf("\nO numero %d é par e maior do que 10", num);       //  Checar se é maior que 10
            } else {
                printf("\nO numero %d é par e menor do que 10", num);       //  Checar se é menor que 10
            }
        }
    }
    
    return 0;
}
