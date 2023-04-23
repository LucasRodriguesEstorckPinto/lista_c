#include <stdio.h>

int main () {	
	float n1,n2;
	float sum,div,x,sub;	
	scanf("%f%f", &n1 , &n2);
	sum = n1 + n2;
	div = n1 / n2;
	x = n1 * n2; 
	sub = n1 - n2;	
	printf("A soma eh %f\na divisao eh %f\na multiplicaçao eh %f\na subtracao eh %f", sum, div , x, sub);
}
