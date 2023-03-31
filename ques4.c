#include<stdio.h>
int main (){
    float x,a,b,c , sub;
    printf("Give value of A:\n");
    scanf("%f", &a);

    printf("Give value of B:\n");
    scanf("%f", &b);

    printf("Give value of C:\n");
    scanf("%f", &c);

    sub= b-c;

    x=a/sub;

    printf("x = %f\n", x);

    return 0;
}