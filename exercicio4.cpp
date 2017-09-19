#include <stdio.h>
#include <stdlib.h>

int main() {
	float r,n;
	printf("Digite o valor do raio: \n");
	scanf("%f", &r);
	n = 3.14*r;
	printf("a area do circulo e: %.2f\n", n);
	system("pause");
}
