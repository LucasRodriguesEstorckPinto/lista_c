#include<stdio.h>

int main() {
	
	float n1,n2,n3,media;
	printf("Digite suas 3 notas:\n");
	scanf("%f%f%f", &n1,&n2,&n3);
	media = (n1+n2+n3)/3;
	printf("Sua media eh: %f pontos", media);
		
}
