//we have to reverse the given num for example 123-->321
#include<stdio.h>
void main () {
    int n,sum=0,rem;
    printf("ENter your number\n");
    scanf("%d",&n);
    while(n!=0) {
        rem = n%10;
        sum = sum*10+rem;
        n=n/10;
    }
    printf("reversed number is :%d",sum);
}