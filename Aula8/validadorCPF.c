#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Aula 8 de LTP */

int multdig(int dig, int valor){
	return dig * valor;
}


int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e, f, g, h, i, digito1, digito2;
    int soma, resto, resto2;
    printf("Escreva seu CPF: (pule de um número para o outro e use . e -) ");
    scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &digito1, &digito2);
    
    soma = multdig(a, 10)+multdig(b, 9)+multdig(c, 8)+multdig(d, 7)+multdig(e, 6)+multdig(f, 5)+multdig(g, 4)+multdig(h, 3)+multdig(i, 2);
    soma *=10; 
    resto = soma % 11;
    printf("%d%d%d.%d%d%d.%d%d%d-%d%d", a, b, c, d, e, f, g, h, i, digito1, digito2);
    soma = multdig(a, 11)+multdig(b, 10)+multdig(c, 9)+multdig(d, 8)+multdig(e, 7)+multdig(f, 6)+multdig(g, 5)+multdig(h, 4)+multdig(i, 3)+multdig(digito1, 2);
    soma *= 10;
	resto2 = soma % 11;
	
	if (resto == digito1 && resto2 == digito2){
		printf("\nCPF Válido");
	}
	else{
		printf("\nCPF Incorreto");
		
	}
	return 0;
}
