#include <stdio.h>

int main() {
    int num, temp=0 , cont=1;

    do {
        scanf("%d" , &num);
    } while (num<=1);

    while (cont<=num) {
        if (num % cont ==0) {
            temp++;
        }
        cont++;
    }

    if (temp==2) {
        printf("Primo");
    }
    else {
        printf("Composto");
    }

    return 0;
}
