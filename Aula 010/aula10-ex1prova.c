#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Aula 10 - LTP linguagem e técnocas de programação do professor Dacio
   Primeira aula do segundo bimestre*/

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4;
	printf("Digite 4 números\n");
	printf("Primeiro: ");
	scanf("%d", &n1);
	printf("Segundo: ");
	scanf("%d", &n2);
	printf("Terceiro: ");
	scanf("%d", &n3);
	printf("Quarto: ");
	scanf("%d", &n4);
	//Validação
    if (n1 % 2 != 0) {
        if (n1 % 5 == 0){
		printf("%d Atende os requisitos\n", n1);
		}
    }
    if (n2 % 2 != 0) {
        if (n2 % 5 == 0){
		printf("%d Atende os requisitos\n", n2);
		}
    }
    if (n3 % 2 != 0) {
        if (n3 % 5 == 0){
		printf("%d Atende os requisitos\n", n3);
		}
    }
    if (n4 % 2 != 0) {
        if (n4 % 5 == 0){
		printf("%d Atende os requisitos\n", n4);
		}
    }
	
	return 0;
}
