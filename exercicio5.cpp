#include <stdio.h>
#include <stdlib.h>

int main() {
	float cel,fahr;
	printf("Digite o valor da base: \n");
	scanf("%f", &cel);
	fahr = 1.8*cel+32;
	printf("  A temperatura em fahrenheit e: %f\n", fahr);
	system("pause");
}
