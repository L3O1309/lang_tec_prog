#include <stdio.h>
#include <stdlib.h>

/* Lista 1 */

int main(int argc, char *argv[]) {
//Exercício 1
	int num1, num2, aux; //definimos a variável aux para auxiliar no que vem pela frente
	
	/*printf("Exercício 1\n");
	
	printf("Insira o valor do primeiro número: ");
	scanf("%d", &num1);
	
	printf("Insira o valor do segundo número: ");
	scanf("%d", &num2);
	
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	printf("Números invertidos: %d e %d\n", num1, num2);*/
//Exercício 2
/*	printf("Exercício 2\n");
	double nd;
	
	printf("Digite um numero double: ");
	scanf("%lf", &nd);
	
	printf("Em notacao cientifica... %e", nd); */
	

//Exercício 3
	/*printf("Exercicio 3\n");
	int n;
	int b1, b2, b3, b4, b5,b6,b7;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	b1 = n/64;
	n = n % 64;
	
	b2 = n/32;
	n = n % 32;
	
	b3 = n/16;
	n = n %16;
	
	b4 = n/8;
	n = n%8;
	
	b5 = n/4;
	n = n%4;
	
	b6 = n/2;
	n = n%2;
	
	b7 = n;
	
	printf("Em binário: %d %d %d %d %d %d %d", b1, b2, b3, b4, b5, b6, b7);*/
	
//Exercício 4
	printf("Exercício 4");
	
	float sf, vv, com;
	printf("Digite seu salario fixo: ");
	scanf("%f", &sf);
	
	printf("Digite o valor das suas vendas: ");
	scanf("%f", &vv);
	
	com = vv * 0,15; 
	sf += com;
	
	printf("Seu salario fixo + a comissao e igual a: %f", sf);
	
	
	return 0;
}
