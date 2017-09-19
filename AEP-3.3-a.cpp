#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int valida = 0;
	int qtd = 0;
	char palavra [32];
	while (valida == 0) {
		printf("Digite uma string\n");
		gets(palavra);
		int x = strlen(palavra);
		if (x > 32 || x < 7) {
			valida = 0;
		} else {
			valida = 1;
		}
	}
	for (int x = 0; x<= strlen(palavra); x++) {
		if (palavra[x] == 'a' || palavra[x] == 'A') {
			qtd++;
		}
		if (palavra[x] == 'e' || palavra[x] == 'E') {
			qtd++;
		}
		if (palavra[x] == 'i' || palavra[x] == 'I') {
			qtd++;
		}
		if (palavra[x] == 'o' || palavra[x] == 'O') {
			qtd++;
		}
		if (palavra[x] == 'u' || palavra[x] == 'U') {
			qtd++;
		}
	}
	printf("quantidade de vogais : %d\n", qtd);
	system("pause");
	return 0;
}

