#include<stdio.h>
#include <math.h>

int main () {
	float raio , comprimento , area , volume;
	
	printf("Digite aqui o raio para ser calculado o comprimento , area e volume da esfera: ");
	scanf("%f",&raio);

	comprimento = 2 * M_PI * raio;
	area = M_PI * (raio* raio);
	volume = (4* M_PI * (pow(raio,3.0))) / 3;
	
	printf("%.1f\n%.1f\n%.1lf", comprimento , area , volume);
}
