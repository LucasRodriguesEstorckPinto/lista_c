#include <stdio.h>

int main () {
	
	char nome1[20], nome2[20], nome3[20], nome4[20];
	float nota1,nota2,nota3,nota4;
	
	printf("Digite 4 nomes de alunos: ");
	scanf(" %[^\n] %[^\n] %[^\n] %[^\n]",nome1, nome2 , nome3 , nome4);
	
	printf("Agora 4 notas para os respectivos alunos: ");
	scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4 );
	
	printf("| ALUNO(A) |       NOTA |\n|%s       %.1f\n|%s       %.1f\n|%s       %.1f\n|%s       %.1f" , nome1 , nota1, nome2 , nota2 , nome3, nota3 , nome4 , nota4);
	
	
}
