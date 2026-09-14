#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Aula 9 - LTP
  Faltei na aula e estou repondo o exercício de revisão agora, pela imersão testei no bloco de notas, errei apenas o == 'C'
  tinha colocado == "C". O resto funcionou de primeira, sinto que estou ficando confiante!*/
float conversaoparaF(float valorC){
    return (valorC * 9/5) + 32; 
}

float conversaoparaC(float valorF){
	return (valorF - 32) * 5/9;

}


int main(){
setlocale(LC_ALL, "Portuguese");
    float valor, valorconvertidoF, valorconvertidoC;
    char grandeza;
    printf("Digite o valor da conversão e sua grandeza: ");
    scanf("%f %c", &valor, &grandeza);

    if (grandeza == 'C'){
        valorconvertidoF = conversaoparaF(valor);
        printf("Seu valor em Celsius é %f e seu valor convertido para Fahrenheit é %f", valor, valorconvertidoF);
    }
    else if (grandeza == 'F'){
        valorconvertidoC = conversaoparaC(valor);
        printf("Seu valor em Fahrenheit é %f e seu valor convertido para Celsius é %f", valor, valorconvertidoC);
    }
    else{
        printf("Algo deu errado, tente novamente!");
    }

}
