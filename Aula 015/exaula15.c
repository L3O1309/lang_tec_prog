#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Aula 15 - LTP */
int comp(char p1, char p2){
	if (p1 == p2) return 1;
	else return 0;
}
int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
  char palavra[30];
	int i, tamanho, verifica;
	printf("Digite a palavra: ");
	scanf("%s", &palavra);
	printf("\n");
	for (i =0; i <= 30 && palavra[i] != '\0'; i++){
		printf("%c",palavra[i]);
	}
	printf("\nTamanho da palavra é %d", i);
	verifica = 0;
	tamanho = i;
	for (i = 0; i < tamanho; i++){
		if(comp(palavra[i], palavra[tamanho - 1 - i]) == 1)verifica = 1; break;
	}
	if (verifica == 1) printf("\nÉ palíndromo!");
	else printf("\nNão é palíndromo");
	return 0;
}
