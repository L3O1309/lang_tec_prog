#include <stdio.h>
#include <stdlib.h>

/* Exercício 4 de LTP */

int main(int argc, char *argv[]) {
	float R, area;
	printf("Digite o raio do círculo: ");
	scanf("%f", &R);
	
	area = 3.14 * (R*R);
	printf("A área do círculo é: %f", area);
	return 0;
}
