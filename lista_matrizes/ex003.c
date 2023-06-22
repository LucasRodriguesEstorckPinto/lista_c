#include<stdio.h>

int main() {
    int m[10][10] , i , j , soma;
    float media ;
    for (i =0 ; i<=9 ; i++) {
            for (j = 0 ; j<=9 ; j++) {
                printf("preencha a posicao [%d][%d] : " , i , j);
                scanf("%d" , &m[i][j]);
            }
    }

    for (i =0 ; i<=9 ; i++) {
        for (j = 0 ; j<=9 ; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
   }

    i =0; j=0;
    soma = m[i][i];
    while (1) {
        i++;
        soma = soma + m[i][i];
        if (i==9) {
            break;
        }
    }
    media = soma/10.0;
    printf("\nA soma de todos os valores da diagonal principal eh %d e sua media eh %.2f" , soma , media);  

    return 0;    
   }


    


