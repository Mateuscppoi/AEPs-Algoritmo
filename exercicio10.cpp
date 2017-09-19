#include <stdio.h>
#include <stdlib.h>

int main() {
	float met,pol;
	printf("Digite o sua altura em metros: ");
	scanf("%f", &met);
	pol = met * 39.3701;
	printf("A sua altura em polegadas e: %f\n", pol);
	system("pause");
}
