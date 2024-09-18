#include <stdio.h>
#include <locale.h>

// varial op = opção

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int i, x,op;
	
	do{
	printf("\nMenu:\n");
	printf("1. Gerar a tabuada de um número.\n");
	printf("2. Sair.");
	printf("\n\nEscolha a opção desejada? ");
	scanf("%d",&op);	
	
	 if(op==1) {
	 	printf("informe um número para calcular a tabuada? ");
	 	scanf("%d",&x);
	 	for (i = 1; i < 11; i++) {
	 	 printf("\n%d x %d = %d",x, i, x*i);
		 }
	 } else if(op==2){
	 	printf("Sair.\n\nPrograma Encerrado.");
	 	
	 	
} 
	 }while (op != 2); 
	 
	 return 0;
	
	
}





