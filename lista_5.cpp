#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x = 1;
	while (x <= 50) {
		printf(" %d ", x);
		x = x + 2;
	}
	printf("\n");
	system("pause");
	return 0;
}

