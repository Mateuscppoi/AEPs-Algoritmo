#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char str1 [30];
	char str2 [30];
	printf("Digite a primeira string: ");
	fflush(stdin);
	gets(str1);
	printf("Digite a segunda string: ");
	fflush(stdin);
	gets(str2);
	if (strcmp(str1,str2) == -1) {
		printf("%s é maior que %s\n", str1,str2);
	} 
	if(strcmp(str1,str2) == 1) {
		printf("%s é menos que %s\n", str2,str1);
	}
	if (strcmp(str1,str2) == 0) {
		printf("São semelhantes\n");
	}
	system("pause");
	return 0;
}

