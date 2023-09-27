//1. Find out sum of first and last digit of a given number.
#include<stdio.h>
void main() {
    int n,last,first,sum;
    printf("ENter yurrr number");
    scanf("%d",&n);
    last=n%10;
    while(n>=10) {
        n=n/10;
        
    }
    first =n;
    sum=first+last;
    printf("sum is %d",sum);
    
}