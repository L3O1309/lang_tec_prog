#include <stdio.h>
#include <stdlib.h>

/* Aula 2 do professor Dacio, matéria de LTP (linguagem e técnicas de programação) */

int main(int argc, char *argv[]) {
	float a, b, c;
	printf("Escreva sua nota dos 3 trimestres para tirar a média: ");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("\nSua média do anual é: %f", (a + b + c) / 3);
	
	return 0;
}
