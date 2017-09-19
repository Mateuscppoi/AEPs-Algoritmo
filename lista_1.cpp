#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int notas [4];
	int media;
	for (int x = 0; x<=3; x++) {
		printf("Escreva a %d nota: ", x+1);
		scanf("%d", &notas[x]);
		media = media + notas[x];
	}	
	media = media / 4;
	if (media >= 6) {
		printf("Aprovado\n");
	} else {
		printf("Reprovado\n");
	}
	system("pause");

	return 0;
}

