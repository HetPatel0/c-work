//5. Print given number in reverse order.
#include<stdio.h>
void main() {
    int n,rem;
    printf("Enter yur number");
    scanf("%d",&n);
    while(n!=0) {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }

}