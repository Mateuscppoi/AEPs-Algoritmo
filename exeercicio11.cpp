#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	if (n % 2 == 0 ) {
		printf("O numero e par\n");
		system("pause");
	} else {
		printf("O numero e impar\n");
		system("pause");
	}
}
