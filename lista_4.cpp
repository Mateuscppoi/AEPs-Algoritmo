#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	for (int x = 0; x<=50; x = x + 2) {
		printf(" %d ", x);
	}
	printf("\n");
    system("pause");
	return 0;
}

