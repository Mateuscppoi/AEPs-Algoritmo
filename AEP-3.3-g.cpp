#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int numeros [20];
	int posicao = 0;
	int maior;
	int menor;
	int passa = 0;
	float media = 0;
	for (int x = 0; x<20;  x++) {
		while (passa == 0) {
			printf("Digite o %d número: ", x+1);
			scanf("%d", &numeros[x]);
			for (int y = 0; y<=posicao; y++) {
				int tmp = posicao;
				if (numeros[x] == numeros[y]) {
					tmp++;
				}
				if (tmp == posicao) {
					passa = 1;
				} else {
					passa = 0;
				}
			}
			media = media + numeros[x];
		}
	}
	
	for (int x = 0 ; x <19; x++) {
		for (int y = x+1; y<20; y++) {
			if (numeros[x] < numeros[y]) {
				int tmp;
				tmp = numeros[x];
				numeros[x] = numeros[y];
				numeros[y] = tmp;
			}
		}
	}
	
	media = media / 20;
	maior = numeros[0];
	menor = numeros[19];
	
	printf("maior = %d\n", maior);
	printf("menor = %d\n", menor);
	printf("media = %.3f\n", media);

	system("pause");
	return 0;
}

