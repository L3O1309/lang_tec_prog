#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Aula 6 de lTP do prof Dacio */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	float n1, n2, a, hip, sum, sub, div, mult;
	int dpd, n1new, n2new, n1inv, n2inv;
	printf("Digite dois números: ");
	scanf("%f %f", &n1, &n2);
	
	n1inv = n1 * -1;
	n2inv = n2 * -1;
	
	if (n1>0 && n2>0){
		if (n1 < 10 && n2 < 10){
			if (n1 && n2 == 2 || n1 && n2 == 3 || n1 && n2 == 5 || n1 && n2 == 7){
				a = (n1 * n2) /2;
				hip = sqrt(pow(n1, 2) + pow(n2, 2));
				printf("A área do triangulo: %f\n", a);
				printf("A hipotenusa: %f", hip);
			}
		else{
			sum = n1 + n2;
			sub = n1 - n2;
			div = n1 / n2;
			mult = n1 * n2;
			printf("As operações básicas entre %f e %f são %f, %f, %f, %f", n1, n2, sum, sub, div, mult);
		}
		}
		else{
			n1new = n1;
			n2new = n2;
			dpd = n1new%n2new == 0;
			printf("É multiplo ? (1 para sim e 0 para não) %d", dpd);
		}
	}

	else{
		printf("Seus valores inversos: %d %d", n1inv, n2inv);
	}
	
	return 0;
}
