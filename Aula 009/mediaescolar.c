#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculomedia(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 3;
}

int main(){
setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, media, restoverde;
    printf("Digite suas 3 notas em seguida para calcular a média: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = calculomedia(n1, n2, n3);
    if (media >= 7.0 && media <= 10.0){
        printf("Aprovado!");
    }
    else if (media <= 6.9 && media >= 4.0){
        restoverde = 7 - media;
        printf("Recuperação, valor que faltou para a média %f", restoverde);
    }
    else if (media < 4.0 && media > 0){
        printf("Reprovado!");
     }
    else{
        printf("Erro! Digite os valores novamente.");
    }
}
