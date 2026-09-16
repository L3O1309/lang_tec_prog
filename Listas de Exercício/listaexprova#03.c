#include <stdio.h>
#include <stdlib.h>
/*Notas de Caixa Eletrônico*/
int main(){
  int valor, aux, nota100, nota50, nota10, nota5, nota2, nota1;
  printf("Digite o valor do saque");
  scanf("%d", &valor);
  aux = valor;
  nota100 = aux / 100;
  aux = aux % 100;
  nota50 = aux / 50;
  aux = aux % 50;
  nota10 = aux / 10;
  aux = aux % 10;
  nota5 = aux / 5;
  aux = aux % 5;
  nota2 = aux / 2;
  aux = aux % 2;
  nota1 = aux / 1;
  aux = aux % 1;
  
  printf("O saque para %d é: %dx100 %dx50 %dx10 %dx5 %dx2 %dx1", valor, nota100, nota50, nota10, nota5, nota2, nota1);
  
}
