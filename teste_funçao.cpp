#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste (int n1, int n2) {
	int menos = n1 - n2;
	printf("Menos = %d\n ", menos);
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	int y;
	int mais;
	int result;
	printf("Digite n1\n");
	scanf("%d", &x);
	printf("Digite n2\n");
	scanf("%d", &y);
	teste(x, y);
	mais = x + y;
	printf("Mais = %d\n ", mais);
	system("pause");
	return 0;
}


