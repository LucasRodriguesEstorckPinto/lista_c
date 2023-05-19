#include <stdio.h>

int main() {
    int n=0,c=0 ,v1=0 ,v2=1,v3 =0;
    scanf("%d",&n);

    printf("%d- %d- ",v1 , v2);
    
    while (c +2<n) {
        v3 = v1 + v2;
        printf("%d- ",v3);
        v1 = v2;
        v2 = v3;
        c++;
    }
    return 0;
}