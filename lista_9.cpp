#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x,y,z;
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf("&d", &y);
	while (y == x) {
		printf("Digite outro número: ");
		scanf("&d", &y);
	}
	if (x > y ) {
		z = x;
	} else {
		z = y;
	}
	printf("O maior é : %d", z);
	system("pause");
	return 0;
}

