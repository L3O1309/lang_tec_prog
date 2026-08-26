#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Teve que introduzir um fluxograma, pois 50% da sala não tinha visto e não tinha sido introdizido em algoritmos*/

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
