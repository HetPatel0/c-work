//checking the no is perfect or not using while loop
#include<stdio.h>
void main () {
    int i=1,sum=0,n;
    printf("Enter your number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0) {
            sum=sum+i;
        }
        
    }
    if(sum==n) {
        printf("PERFECT");
    }
    else
    {
        printf("NOT PERFECT");
    }
}