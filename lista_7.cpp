#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("O n�mero � par");
	} else {
		printf("O n�mero � �mpar");
	}
	printf("\n");
	system("pause");
	return 0;
}

