//3. Check whether the given number is palindrome or not
#include<stdio.h>
void main() {
    int n,rem,sum=0,temp;
    printf("Enter yur number");
    scanf("%d",&n);
    temp=n;
    while(n!=0) {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum){
        printf("pallindrom");

    }
    else {
        printf("not a pallindrom");
    }

}