#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	printf("Teste de acentos: � funcional");
	system("pause");
	return 0;
}

