#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int numeros [10];
	
	for (int x = 0; x<10; x++) {
		printf("Digite o %d numero: ", x+1);
		scanf("%d", &numeros[x]);
	}
	
	for (int x = 0; x<10; x++) {
		for (int y = 0; y<9; y++) {
			if (numeros[y] < numeros[y+1]) {
				int tmp;
				tmp = numeros[y];
				numeros[y] = numeros[y+1];
				numeros[y+1] = tmp;
			}
		}
	}
	
	for (int x = 0; x<10; x++) {
		printf("%d ", numeros[x]);
	}
	

	system("pause");
	return 0;
}

