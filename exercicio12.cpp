#include <stdio.h>
#include <stdlib.h>

int main () {
int x,y,z,w;
w = z; 
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
	for (x = a1+1; x<a2; x++ ) {
		vividos = vividos + 365; 
	}
	for (x = a1; x <= a1; x++) {
		for (y = m1 ;y<= 12; y++){
			for (z = w; z<= 30; z++  )
			vividos++;
			if (z == 30) {
				w = 1;
			}
		}
	}
	for (x = a2; x <= a2; x++) {
		for (y = 1 ;y<= m2; y++){
			if (y != m2) {
				for (z = 1; z<= 30; z++  ) {
					vividos++;
					if (z == 30) {
						w = 1;
					}
				}
			}
			if (y == m2) {
				for (z = 1; z<= d2; z++  ) {
					vividos++;
				}
			}
		}
	}
	printf("\n%d", vividos);
}

