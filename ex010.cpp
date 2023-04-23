#include<stdio.h>

int main() {
	char nome[50],endereco[50],telefone[50];
	char cep[50];
	
	printf("Digite seu nome: ");
	scanf(" %[^\n]",nome);
	
	printf("Endereco: ");
	scanf(" %[^\n]",endereco);
	
	printf("CEP: ");
	scanf(" %[^\n]",cep);
	
	printf("Telefone: ");
	scanf(" %[^\n]",telefone);
	
	printf("%s\n%s\n%s\n%s", nome, endereco, cep , telefone);
	
	
}
