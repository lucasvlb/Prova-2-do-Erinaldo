#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int i, n, f, op;
	
    do{
	printf("\nMenu:\n");
	printf("1. Calcular o fatorial de um n�mero.\n");
	printf("2. Sair.");
	printf("\n\nEscolha a op��o desejada? ");
	scanf("%d",&op);
	
	if(op==1) {
	  f = 1;
	  printf("Informe um n�mero para calcular o fatorial? ");
	  scanf("%d",&n);
	  for( i =1; i<= n; i++){
			f *= i;
}
    printf("\nO fatorial de %d � = %d\n", n,f);
}   else if(op==2){
	 	printf("Sair.\n\nPrograma Encerrado.");
    
}
	
}while (op != 2); 
	
	return 0;
	
  
}
