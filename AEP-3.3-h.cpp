#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int matriz [6][6];
	int numero [36];
	srand(time(NULL));
	for (int x = 0; x<=5; x++) {
		for (int y = 0; y<=5; y++) {
			matriz [x][y] = rand() % 100;
		}
	}
	int tmp = 0;
	int linha = 0;
	int fimLinha = 5;
	int fimColuna = 5;
	int coluna = 0;
	int baixo = 0;
	int cima = 0;
	int volta = 0;
	int segue = 1;
	while (tmp < 36){
	
		if (segue == 1) {
			for (int x = linha; x<=linha; x++) {
				for (int y = coluna; y<=fimColuna; y++) {
					numero[tmp] = matriz [x][y];
					tmp++;
					if (y == fimColuna) {
						segue = 0;
						baixo = 1;
					}
				}
			}
			linha++;
		}
		if (baixo == 1) {
			for (int x = linha; x<=fimLinha; x++) {
				numero[tmp] = matriz [x] [fimColuna];
				tmp++;
				if (x == fimLinha) {
					baixo = 0;
					volta = 1; 
				}
			}
			fimColuna--;
		}
	
		if (volta == 1) {
			for (int x = fimLinha; x<=fimLinha; x++) {
				for (int y = fimColuna; y>=coluna; y--) {
					numero[tmp] = matriz [x][y];
					tmp++;
					if (y == coluna) {
						volta = 0;
						cima = 1;
					}
				}
			}
			fimLinha--;
		}
		
		if (cima == 1) {
			for (int x = fimLinha; x>=linha; x--) {
				numero[tmp] = matriz [x] [coluna];
				tmp++;
				if (x == fimLinha) {
					cima = 0;
					segue = 1;
				}
			}
			coluna++; 
		}
		
	}
	
	for (int x = 0; x<35; x++){
		for (int y = x+1; y<=35; y++) {
			if (numero [x] > numero[y]) {
				int tmp2;
				tmp2 = numero[x];
				numero[x] = numero [y];
				numero [y] = tmp2;
			}
		}
	}
	
	system("pause");
	
	tmp = 0;
	linha = 0;
	fimLinha = 5;
	fimColuna = 5;
	coluna = 0;
	baixo = 0;
	cima = 0;
	volta = 0;
	segue = 1;
	while (tmp < 36){
	
		if (segue == 1) {
			for (int x = linha; x<=linha; x++) {
				for (int y = coluna; y<=fimColuna; y++) {
					matriz [x][y] = numero[tmp];
					tmp++;
					if (y == fimColuna) {
						segue = 0;
						baixo = 1;
					}
				}
			}
			linha++;
		}
		if (baixo == 1) {
			for (int x = linha; x<=fimLinha; x++) {
				matriz [x] [fimColuna] = numero[tmp];
				tmp++;
				if (x == fimLinha) {
					baixo = 0;
					volta = 1; 
				}
			}
			fimColuna--;
		}
	
		if (volta == 1) {
			for (int x = fimLinha; x<=fimLinha; x++) {
				for (int y = fimColuna; y>=coluna; y--) {
					matriz [x][y] = numero[tmp];
					tmp++;
					if (y == coluna) {
						volta = 0;
						cima = 1;
					}
				}
			}
			fimLinha--;
		}
		
		if (cima == 1) {
			for (int x = fimLinha; x>=linha; x--) {
				matriz [x] [coluna] = numero[tmp];
				tmp++;
				if (x == fimLinha) {
					cima = 0;
					segue = 1;
				}
			}
			coluna++; 
		}
		
	}
	
	system("pause");
	
	for (int x = 0; x<35; x++){
		for (int y = x+1; y<=35; y++) {
			if (numero [x] > numero[y]) {
				int tmp2;
				tmp2 = numero[x];
				numero[x] = numero [y];
				numero [y] = tmp2;
			}
		}
	}
		
	
	
	for (int x = 0; x<=5; x++) {
		for (int y = 0; y<=5; y++) {
			printf("%d ", matriz[x][y]);
			if (y == 5) {
				printf("\n");
			}
		}
	}
	printf("\n");
	for (int x = 0; x<=35; x++) {
		printf("%d ", numero[x]);
	}
	printf("\n");
	system("pause");
	return 0;
}

