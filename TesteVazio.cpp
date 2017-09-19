#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char palavra [4];
	for (int x = 0; x<4; x++) {
		fflush(stdin);
		scanf("%c", palavra[x]);
	}
	for (int x = 0; x<4; x++) {
		if (palavra[x] = ' ') {
			printf("Vazio com ''\n");
		} 
		if (palavra[x] != ' ') {
			printf("%d", x);
		}
		
	}

	system("pause");
	return 0;
}

