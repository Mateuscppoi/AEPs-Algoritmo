#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int matriz [6][6];
	
	for (int x = 0; x<=5; x++) {
		for (int y = 0; y<=5; y++) {
			matriz[x][y] = (rand() % 195) + 5;
		}
	}
	for (int x = 0; x<=5; x++) {
		for (int y = 0; y<=5; y++) {
			printf("%d ",matriz[x][y]);
			if (y == 5) {
				printf("\n");
			}
		}
	}

	system("pause");
	return 0;
}

