#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b, h;
	printf("Digite a base a a altura do triangulo respectivamente: ");
	scanf("%d %d", &b, &h);
	
	printf("\nA área do triangulo é %d %d", b * h);
	return 0;
}
