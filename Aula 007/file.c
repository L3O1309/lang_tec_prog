/*Aprendendo Switch e Case*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
void v1(){
  printf("Froes lindão");
}
void v2(){
  printf("Marco lindão");
}
void v3(){
  printf("Leo Maravilhoso");
}
int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
  int option;
  printf("Digite um número de 1-3: ");
  scanf("%d", &option);
  switch (option){
    case 1: v1(); break;
    case 2: v2(); break;
    case 3: v3(); break;
    default: printf("Tente novamente!");
  }
  return 0;
}
