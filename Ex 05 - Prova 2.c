#include <stdio.h>
#include <locale.h>

int main() {
	
/*variavel = i contador
*variavel numP = pares
variavel numI = �mpares*/

  setlocale(LC_ALL,"Portuguese");	
	int num, i, numP = 0, numI = 0;
	
		for (i = 1; i <11; i++){
	
	 	printf("informe um n�mero? ");
	 	scanf("%d", &num);
	 
	 	if (num%2==0){
	 	numP+= 1;
	 }
	 	else{
		 
	   	numI+= 1;
}
        
}
   printf(" a quantidade de n�meros pares � de %d e a quantidade de n�meros �mpares � de %d.",numP,numI);
   







  return 0;
  
}
