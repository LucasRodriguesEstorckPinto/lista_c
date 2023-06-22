#include <stdio.h>

int main() {
	float M[2][2] , R[2][2] , maior;
	int c1,c2;
	
	//preenchendo a matriz M;
	for (c1=0; c1<2;c1++) {
		for (c2=0;c2<2;c2++) {
			printf("preencha a posicao [%d][%d]: ",c1+1,c2+1);
			scanf("%f",&M[c1][c2]);
		}
	}
	//mostrando a matriz inserida
	printf("Matriz inserida\n\n");
	for (c1=0; c1<2;c1++) {
		for (c2=0;c2<2;c2++) {
			printf("%.3f\t",M[c1][c2]);
		}
		printf("\n");
	}
	
	//capturando maior valor da matriz M;
	maior =0;
	for (c1=0; c1<2;c1++) {
		for (c2=0;c2<2;c2++) {
			if (M[c1][c2]>maior) {
				maior = M[c1][c2];
			}
		}
	}
	
	//multiplicando os valores de M pelos itens de M e colocando na matriz R;
	
	for (c1=0; c1<2;c1++) {
		for (c2=0;c2<2;c2++) {
			R[c1][c2] = M[c1][c2] * maior;
		}
	}
	//mostrando matriz resultante;
	
	printf("\nMatriz resultante\n\n");
	for (c1=0; c1<2;c1++) {
		for (c2=0;c2<2;c2++) {
			printf("%.3f\t\t",R[c1][c2]);
		}
		printf("\n");
	}
	
	return 0;
}