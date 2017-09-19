#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1,n2,n3,n4;
	float media;
	printf("Digite a primeira nota: ");
	scanf("%d", &n1);
	printf("Digite a segunda nota: ");
	scanf("%d", &n2);
	printf("Digite a terceira nota: ");
	scanf("%d", &n3);
	printf("Digite a quarta nota: ");
	scanf("%d", &n4);
	media = (n1 + n2 + n3 + n4)/ 4;
	printf("A media e: %.1f", media);
}
