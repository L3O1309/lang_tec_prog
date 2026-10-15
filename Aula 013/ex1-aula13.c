#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Aula 013 de LTP - 3º Aula Aprendendo Laço de Repetição*/

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	/*Elabore um programa que permita a entrada de 3 valores.
	E conte do primeiro valor inserido,
	até o segundo valor com o passo da contagem 
	dado pelo terceiro valor*/
	//ex: 1, 8, 2 >> contar de 1 a 8, com passo 2 = 3, 5, 7
	int n1, n2, n3, i;
	printf("Número 1: ");
	scanf("%d", &n1);
	printf("Número 2: ");
	scanf("%d", &n2);
	printf("Número 3: ");
	scanf("%d", &n3);
	
	i = n1 + n3;
	
	while (i <= n2){
		printf("\nSoma no intervalo de %d\n", n3);
		printf("%d", i);
		i += n3;
	}
  return 0;
}
