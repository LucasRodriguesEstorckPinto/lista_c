#include<stdio.h>

int main() {

    int num,cont1=1,cont2=1;

    while (cont1<=10) {

        for(cont2 ; cont2<=10 ; cont2++) {
            printf("%d * %d = %d\n" , cont1 , cont2 , cont1*cont2);
        }
        printf("________________________________\n");
        cont1++;
        cont2=1;
    }

    return 0;
}