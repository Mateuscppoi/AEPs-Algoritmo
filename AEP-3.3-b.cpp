#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char str1 [30];
	char str2 [30];
	printf("Digite a primeira string: \n");
	gets(str1);
	printf("Digite a segunda string: \n");
	gets(str2);
	strcat(str1,str2);
	int qtd = strlen(str1);
	printf("A quantidade de caracter é: %d\n", qtd);
	system("pause");
	return 0;
}

