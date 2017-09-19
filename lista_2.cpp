#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	for (int x = 1; x<=30; x++) {
		printf(" %d,", x);
	}
	printf("\n");
	system("pause");
	return 0;
}

