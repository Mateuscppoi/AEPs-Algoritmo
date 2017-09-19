#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int passa = 0;
	int vt1 [20];
	int vtAssis [20];
	int lugar = 0;
	int tmp = 0;
	srand(time(NULL));
	for (int x = 0; x<20; x++) {
		passa = 0;
		while (passa == 0) {
			vt1[x] = rand() % 51;
			vt1[x] -= 25;  
			int passa1 = 0;
			for(int y = 0; y< tmp; y++){
				if (vt1[x] == vtAssis[y]){
					tmp++;
				} else {
					passa1++;
				}
			}
			if (passa1 == 1){
				passa = 1;
				vtAssis[x] = vt1[x];
			}
		}
	}
	for (int x = 0; x<20; x++){
		printf("%d ", vtAssis[x]);
	}
	system("pause");
	return 0;
}

