#include<stdio.h>
int main(){
    char A;
    printf("enter A:");
    scanf("%c",&A);

    if (A=='a'||A=='e'||A=='i'||A=='o'||A=='u'){
        printf("Given letter is vowel");

    } else{
        printf("Given letter is consonant");

    }
    return 0;
}