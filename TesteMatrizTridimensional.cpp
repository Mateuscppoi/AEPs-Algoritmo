#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n [10][6][3][200];
	int tmp = 0;
	for (int x = 0; x<10; x++) {
		for (int y = 0; y<6; y++) {
			for (int z = 0; z<3; z++) {
				for (int w = 0; w<150; w++){
				tmp++;
				}
			}
		}
	}
	printf("%d",tmp);
	system("pause");
	return 0;
}

