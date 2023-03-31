#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%3==0){
        printf("The number given by user is divisible by 3.\n");
    }else{
        printf("The number given by user is not divisible by 3.\n");
    }
    return 0 ;
    }