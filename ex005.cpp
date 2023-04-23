#include<stdio.h>

int main() {
	float n1,n2,n3;
	float peso1,peso2,peso3;
	float media;
	
	printf("Notas\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	printf("Respectivos pesos\n");
	scanf("%f%f%f", &peso1 , &peso2 , &peso3);
	
	media = (n1 * peso1 + n2 * peso2 + n3 * peso3)/ (peso1 + peso2 + peso3);
	
	printf("A media eh: %f pontos", media);
}
