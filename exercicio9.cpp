#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1,n2,n3;
	int passa = 0;
	while(passa == 0) {
	printf("Digite um numero : ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	printf("Digite mais um numero: ");
	scanf("%f", &n3);
		if (n3 != n2 && n1 != n2 && n3 != n1) {
			passa = 1;
		} else {
			passa = 0;
			system("cls");
			printf("Digite numeros distintos\n");
			system("pause");
			system("cls");
		}
	}
	float maior;
	if (n3 > n2 && n3 > n1) {
		maior = n3;
	} 
	if (n2>n1 && n2 > n3) {
		maior = n2;
	} 
	if (n1>n2 && n1 > n3) {
		maior = n1;
	}
	
	printf("O maior numero e: %.2f\n", maior);
	system("pause");
}
