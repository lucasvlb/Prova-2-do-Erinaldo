#include <stdio.h>
#include <stdbool.h>                                                        //  Para permitir usar booleans
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "Portuguese");                                        // Localização para o idioma PT-BR
    
    
    //VARIÁVEIS
    
    bool menu = true;                                                       //  Boolean para ver se volta pro menu ou não;
    int resp;
    float num;
    float numConv;
    
    
    do{
        printf("\n-----CÁLCULO DE CONVERSÃO DE TEMPERATURA-----");          //  Começando com um simples menu
        printf("\n{1} Converter de Celsius para Fahrenheit");
        printf("\n{2} Converter de Fahrenheit para Ceusius");
        printf("\n{3} Sair\n");
        scanf("%d", &resp);
        
        switch(resp) {                                                      //  Cairá no case dependendo da resposta do usuário
            case 1:
                printf("\nCelsius para Fahrenheit\nEscreva o valor a ser convertido: ");
                scanf("%f", &num);
                numConv = (num * 1.8) + 32;
                printf("\nResultado: %.2f°F\n", numConv);
                break;
            case 2:
                printf("\nFahrenheit para Celsius\nEscreva o valor a ser convertido: ");
                scanf("%f", &num);
                numConv = (num - 32) / 1.8;
                printf("\nResultado: %.2f°C\n", numConv);
                break;
            case 3:
                printf("Saindo...");
                menu = false;
                break;
        }
    } while (menu == true);
    

    return 0;
}
