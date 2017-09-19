#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char x[100];
	scanf("%s", &x);
	for (int y = 0; y < strlen(x); y++){
		printf("%c\n", x[y]);
	}
	system("pause");
	return 0;
}

