#include <stdio.h>
#include <stdlib.h>

int main() {
	float cel,kel;
	printf("Digite a temperatura em celsius: \n");
	scanf("%f", &cel);
	kel = cel + 273;
	printf("  A temperatura em kelvin e: %f\n", kel);
	system("pause");
}
