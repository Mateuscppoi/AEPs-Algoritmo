#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x,y,z;
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Digite outro n�mero: ");
	scanf("&d", &y);
	while (y == x) {
		printf("Digite outro n�mero: ");
		scanf("&d", &y);
	}
	if (x > y ) {
		z = x;
	} else {
		z = y;
	}
	printf("O maior � : %d", z);
	system("pause");
	return 0;
}

