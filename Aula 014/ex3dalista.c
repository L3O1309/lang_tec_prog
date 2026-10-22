#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
	int n, aux, mult=1;
	scanf("%d", &n);
	aux = 0;
	while (n>0)
	{
		aux = aux+(n%2)*mult;
		n=n/2;
		mult=mult*10;
	}
	printf("%d", aux);
	return 0;
}
