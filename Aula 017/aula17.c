#include <stdio.h>
#include <stdlib.h>

/* Aula 17 - LTP 
   Professor revisou os conteúdos, 
   então fiz qualquer coisa, 
   mas só commitei no dia seguinte, perdão :(*/

int main(int argc, char *argv[]) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	do {
		a += b;
		printf("%d", a);
	} while (a < b);
	
	return 0;
}
