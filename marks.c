#include<stdio.h>
int main(){
    int marks;
    printf("Enter your no.:");
    scanf("%d", &marks);
    if (marks>=90 && marks<=100){
        printf("Your Grade is S");

    }else {
        if(marks>=70 && marks<=89){
            printf("Your Grade is A");

        }else if(marks>=55 && marks<=69){
                printf("Your Grade is B");
            } else if (marks>=40 && marks<=54)
                {printf("Your Grade is D");
            } else if (marks>=35 && marks<=39)
                {printf("Your Grade is E");

            }else if (marks>=0 && marks<=34)
                {printf("Your Grade is F");
            } else {
                printf("please enter a value less than or equal to 100");
            } 

            }
        
    
    return 0;
}