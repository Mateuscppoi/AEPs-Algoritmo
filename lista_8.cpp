#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x,y,z;
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf("%d", &y);
	z = x + y;
	printf("A soma é: %d", z);
	system("pause");
	return 0;
}

