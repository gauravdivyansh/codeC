#include<stdio.h>
int main(){
int n;
printf("enter the n:");
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i==0){
        printf("this num is not prime");
    }
    else if(i==n-1){
        printf("this number is prime number");
    }
}

    return 0;
}