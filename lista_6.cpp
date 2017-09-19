#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	int y;
	int z = 0; 
	printf("Digite um número: ");
	scanf("%d", &x);
	while (y < x+5 ) {
		if (z == 0){
			printf("Digite outro número maior \nque o anterior em pelo menos 5 casas: ");
			scanf("%d", &y);
			z++;
		}
		system("cls");
		if (z != 0) {
			printf("VALOR INVÁLIDO\n");
			printf("Digite um número maior \nque o anterior em pelo menos 5 casas: ");
			scanf("%d", &y);
		}
	}
	printf(" %d %d", x, y);
	system("pause");
	return 0;
}

