#include <stdio.h>
#include <stdlib.h>

int main () {
	int x,y,z;
	int d1,d2;
	int m1,m2;
	int a1,a2;
	int inicio = 0;
	int vividos = 0;
	printf("Digite a data de nascimento: ");
	printf("\nDia :");
	scanf("%d", &d1);
	printf("Mes :");
	scanf("%d", &m1);
	printf("Ano :");
	scanf("%d", &a1);
	printf("Digite a data atual: ");
	printf("\nDia :");
	scanf("%d", &d2);
	printf("Mes :");
	scanf("%d", &m2);
	printf("Ano :");
	scanf("%d", &a2);
	for ( x = a2; x <= a1; x-- ) {
		if (a1 != a2 || inicio == 0) {
			for ( y = m1; y<=12; y++) {
				for ( z = d1; z <= 30; z++) {
					vividos++;
					if (z == 30) {
						d1 = 1;
					}
				}
				if (y == 12) {
					m1 = 1;
					inicio = 1;
				}
			}
		}
		if (a1 != a2 || inicio == 1) {
			vividos = vividos + 365;
		}
		if (a1 == a2) {
			if (m1 != m2){
				for ( y = m1; y<m2; y++) {
					for ( z = d1; z <= 30; z++) {
						vividos++;
						if (z == 30) {
							d1 = 1;
						}
					}
				}
			}
			if (m1 == m2) {
				for (z = d1; z <= d2; z++) {
						vividos++;
				}
			}
		}
	}
	printf("\n%d", vividos);
}

