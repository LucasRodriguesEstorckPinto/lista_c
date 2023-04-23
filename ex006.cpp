#include<stdio.h>

int main () {
	float salario;
	float percent = 0.25;
	float nsalario;
	printf("Digite aqui seu salario para ser calculado um aumento de 25 porcento\n");
	scanf("%f", &salario);
	printf("%f", salario);
	
	nsalario = salario + (salario * percent);
	
	printf("\nNovo salario: R$%f",nsalario);
	
}
