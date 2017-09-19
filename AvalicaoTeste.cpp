#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char stg1[12];
	char stg2 [12];
	int passa = 0;
	while (passa == 0) {
		printf("Digite um número com no mínimo 6 e no máximo 12 caracteres: ");
		fflush(stdin);
		gets(stg1);
		if (strlen(stg1) >= 6 && strlen(stg1) < 13) {
			passa = 1;
		}
	}
	int tmp = 0;
	int tamanho = strlen(stg1) -1;
	for (int x = tamanho; x >= 0; x--){
		stg2[tmp] = stg1[x];
		tmp++;
	}
	
	int n1 [2][12];
	
	for (int x = 0; x<= strlen(stg2); x++) {
		n1[0][x] = stg1[x];
	}
	for (int x = 0; x<= strlen(stg2); x++) {
		n1[1][x] = stg2[x];
	}
	for (int x = 0; x<= strlen(stg2); x++) {
		n1[1][x] -= x;
	}
	
	tmp = strlen(stg1);
	
	for(int x = 0; x<= strlen(stg2)-1; x++) {
		n1[1][x] = n1[1][x] + tmp;
	}
	
	for (int x = 1; x<= strlen(stg1)-1; x= x+2){
		n1[1][x] += 3; 
	}
	
	for (int x = 0; x<= strlen(stg1)-1; x++) {
		printf("%c = %d\n", stg1[x], n1[1][x]);
	}
	
	for (int x = 0; x<= strlen(stg1)-1; x++) {
		printf("%c \n", n1[1][x]);
	}	
	return 0;
}

