#include <stdio.h>

int main()
{
    int a=1;
    int b=1;
    while(b<10){
        while(a<=b){
            printf("%d*%d=%d\t",a,b,a*b);
            a++;
        }
        printf("\n");
        b++;
        a=1;
    }
}