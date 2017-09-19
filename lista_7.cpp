#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Digite um número: ");
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("O número é par");
	} else {
		printf("O número é ímpar");
	}
	printf("\n");
	system("pause");
	return 0;
}

