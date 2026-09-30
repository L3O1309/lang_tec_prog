#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aula 5 - LTP 
   Teste de Lógica com autenticação de número par e ímpar
*/

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("Número par!");
	}
	else{
		printf("Número ímpar!");
		
	}
	
	return 0;
}
