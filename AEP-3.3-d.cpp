#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char nome [5] [30];
	for (int x = 0; x<5; x++) {
		printf("Digite o %dº nome: ", x+1);
		gets(nome[x]);
	}
	for (int x = 0; x<4; x++) {
		for (int y = x+1; y<=4; y++) {
			char tmp [1][30];
			if (strcmp (nome[x], nome[y]) == 1) {
				strcpy(tmp[0],nome[x]);
				strcpy(nome[x],nome[y]);
				strcpy(nome[y],tmp[0]); 
			}
		}
	}
	for (int x = 0; x<5; x++) {
		printf("%s\n",nome[x]);
	}
	system("pause");
	return 0;
}

