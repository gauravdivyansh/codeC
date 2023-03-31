#include<stdio.h>

int main(){
    int a, k;
    scanf("%d", &a);
    k = a % 2;
    if(k == 0){
        printf("a is even");
    }
    else{
        printf("a is odd");
    }
    return 0;
}
