#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 10 números, 
vê o maior entre os 5 primeiros
e o menor entre os 5 últimos */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int vetor[10];
	int i, maior, menor;
	
	for (i = 0; i < 10; i++){
		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	return 0;
}
