#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Aula 013 de LTP - 3º Aula Aprendendo Laço de Repetição*/

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
  int n, j;
  	double soma = 0.0;
  	double termo = 1.0;
  	printf("Digite o número de quantidade de termos: ");
  	scanf("%d", &n);
  	
  	j = 1;
  	while (j<=n){
  		termo = termo / 2.0;
      	soma += termo;
  		printf("\nSoma dos termos até o %dº termo: %.8f\n", j, soma);
  		j++;
  	}
  	return 0;
}
