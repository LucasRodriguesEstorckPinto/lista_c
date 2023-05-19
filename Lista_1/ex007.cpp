#include<stdio.h>

int main () {
	float salario;
	int percent;
	float nsalario;
	
	printf("Digite aqui seu salario para ser calculado um aumento de x porcento\n");
	scanf("%f", &salario);
	printf("Qual porcentagem deve ser acrescida ao salario? ");
	scanf("%d",&percent);
	
	nsalario = salario + (salario * (percent/100.0));
	
	printf("\nNovo salario: R$%f",nsalario);
	
}
