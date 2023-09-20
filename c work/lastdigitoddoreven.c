//check wheter last digit is odd or even
#include<stdio.h>
void main() {
    int a;
    printf("Enter your digit : ");
    scanf("%d",&a);

    if(a%2==0){
        printf("Your last digit is even");
    }
    else 
    {
        printf("Your last digit is odd");
    }
}