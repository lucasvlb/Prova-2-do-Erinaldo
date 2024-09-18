#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int a;
	float nota, peso, media, somaN, somaP, media_final = 0;
	
		for ( a = 1; a<= 5; a++){
		 somaN = 0;
		 somaP = 0;
		 
	        printf("Informe a nota do aluno %d? ",a);
	     	scanf("%f",&nota);
	    	printf("Informe o peso da nota do aluno %d? ",a);
	     	scanf("%f",&peso);
	     
	    	somaN += nota * peso;
	    	somaP += peso;
		
		if (somaP != 0) {
		  media = somaN / somaP;
	    printf("\nO valor da média ponderada do aluno %d é = %.2f\n\n", a, media);	
}       else {
            printf("\nO peso total do aluno %d é zero, não é possível calcular a média.\n\n", a);
            media = 0;
        }

        media_final += media;
}
    media_final /= 5;
    printf("A média final da turma é: %.2f\n\n", media_final);

	
	return 0;
	
}

