#include <stdio.h>

int main() {
    int numero, contador =1;
    scanf("%d",&numero);

    for (contador ; contador <=10 ; contador++) {
        printf("%d * %d = %d\n" , numero , contador , numero*contador);
    }
    return 0;
}