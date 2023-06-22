#include <stdio.h>

int main() {

    int M[3][4] , vet[2]; //matriz de 3 linhas e 4 colunas e vetor de 3 posições
    int i =0 , j=0 , soma =0; // i = linha e j = coluna v = contador vetor
     
    //preenchendo a matriz
    for (i=0 ; i<=2 ; i++) {
        for (j=0 ; j<=3 ; j++) {
            printf("preencha a posicao [%d][%d] : " , i+1 , j+1);
            scanf("%d",&M[i][j]);
        }
    }

    // mostrando a matriz
    printf("\n");
    for (i=0 ; i<=2 ; i++) {
            for (j=0 ; j<=3 ; j++) {
                printf("%d\t",M[i][j]);
            }
            printf("\n");
        }
    //calculando vetor resultante
    for (i=0 ; i<=2 ; i++) {
            for (j=0 ; j<=3 ; j++) {
                   soma = soma + M[i][j]; 
            }
            vet[i] = soma;
            soma =0;
            
            
        }

    //mostrando vetor resultante
    printf("\n");
    for (i=0 ; i<3 ; i++) {
        printf("%d - ", vet[i]);
    }


    return 0;
}