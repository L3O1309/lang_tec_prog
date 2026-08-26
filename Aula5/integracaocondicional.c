#include <stdio.h>
#include <stdlib.h>

/* Teve que introduzir um fluxograma, pois 50% da sala não tinha visto e não tinha sido introdizido em algoritmos*/

int main(int argc, char *argv[]) {
	int a, b, c, r;
	
	printf("Digite três valores respectivamente: ");
	scanf("%d %d %d", &a, &b, &c);
	
	
	if (a>b && a >c) {
		r = a;
	}
	else if (b > c && b >a) {
		r = b;
	}
	else{
		r = c;
	}
	printf("%d", r);
	
	return 0;
}
